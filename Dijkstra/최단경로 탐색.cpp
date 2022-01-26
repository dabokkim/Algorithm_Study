#include <stdio.h>
/*************************** Map표현 *******************************/
# define SZ 8 // 지도 크기가 가로8, 세로8


struct coord
{
	int row;
	int col;
};

struct vertex_info  //정보를 저장하기위한 구조체생성
{
	int prev_row; //바로 직전에 방문한 vertex의 row
	int prev_col; //바로 직전에 방문한 vertex의 col
	int found; // 최종 경로를 찾았는지? 1, 아니면 0
	int dist; // 거리
};

struct vertex_info vertexes[SZ][SZ]; //목표 vertex열


// 2차원 배열 생성('#' : 장벽, '.' : 빈칸)
char map[SZ][SZ] =
{
	{'.', '#','.', '#','.', '.','.', '#',},
	{'.', '#','.', '#','.', '#','.', '#',},
	{'.', '#','.', '#','.', '#','.', '.',},
	{'.', '#','.', '.','.', '#','#', '.',},
	{'.', '#','.', '#','#', '#','#', '.',},
	{'.', '#','.', '#','.', '#','.', '.',},
	{'.', '#','.', '.','.', '#','.', '#',},
	{'.', '.','.', '#','.', '#','.', '.',}
};

void initVertexInfo(void) // 초기화작업
{
	int i, j;
	for (i = 0; i < SZ; i++)
	{
		for (j = 0; j < SZ; j++)
		{
			vertexes[i][j].dist = 999999; // 무한대 값
				vertexes[i][j].prev_row = -1; //직전에 누구를 거쳤는지 모르기 때문에 -1로 초기화
				vertexes[i][j].prev_col = -1; //직전에 누구를 거쳤는지 모르기 때문에 -1로 초기화
				vertexes[i][j].found = 0; // 최단경로는 아직 밝혀지지 않았기 때문에 0으로 둠
		}
	}
}

// 1. (me_row, me_col) --> (row,col) 로 이동이 가능한지?
// 2. (me_row, me_col) --> (row,col) 로 더 빨리 갈 수 있는 길이 있는지?

void checkNeighbor(int row, int col, int me_row, int me_col) //chechkNeighbor()함수에 체크할 위치와 함께, 나의 위치도 인수로 넘긴다.
{
	if (row >= 0 && col >= 0 && row < SZ && col < SZ && //(row,col)의 좌표가 유효한지부터 검사
		map[row][col] == '.' &&				// 갈 수 있는 곳
		vertexes[row][col].found == 0)		// 최단 경로가 아직 알려지지 않은 곳
	{
		// 업데이트 할 수 있는 마지막 조건은,
		// (me_row, me_col)을 통해서 (row,col)까지 지금까지 알려진 것보다 더
		// 빨리 갈 수 있을 경우에만 한다

		// vertexes[me_row][me_col].dist + 1 : (me_row, me_col)을 거쳐서, (row,col)갈 때의 거리
		// +1을 하는 이유 : (me_row, me_col)에서 (row,col)로 이동하는 것은 1칸이기 때문에...
		// vertexes[row][col].dist : 지금까지 알려진 (row, col) 까지의 거리
		// 지금까지 알려진 것 보다, (me_row, me_col)을 거치는 새 경로가 더 가깝다면
		// 업데이트
		if (vertexes[row][col].dist > vertexes[me_row][me_col].dist + 1)
		{
			// 이제, (row, col)까지 가는 경로를
			// (me_row, me_col)을 거쳐서 가는 것으로 업데이트
			vertexes[row][col].dist = vertexes[me_row][me_col].dist + 1;
			vertexes[row][col].prev_row = me_row;
			vertexes[row][col].prev_col = me_col;
		}
	}
}

void checkAllNeighbors(int me_row, int me_col)
{	//이동은 상하좌우만 가능
	checkNeighbor(me_row - 1, me_col, me_row, me_col); // 나의 위치에서 위
	checkNeighbor(me_row + 1, me_col, me_row, me_col); // 나의 위치에서 아래
	checkNeighbor(me_row, me_col - 1, me_row, me_col); // 나의 위치에서 왼쪽
	checkNeighbor(me_row, me_col + 1, me_row, me_col); // 나의 위치에서 오른쪽
}

// found == 0 이면서
// dist가 가장 짧은 vertex의 (row,col)을
// struct coord에 담아서 반환
struct coord findNextVertex(void)
{
	int i, j;
	struct coord sm_coord;
	int smallest_dist = 999999;

	sm_coord.row = sm_coord.col = -1;
	
	for (i = 0; i < SZ; i++)
	{
		for (j = 0; j < SZ; j++)
		{
			if (vertexes[i][j].found == 0 && vertexes[i][j].dist < smallest_dist)
			{
				sm_coord.row = i;
				sm_coord.col = j;
				smallest_dist = vertexes[i][j].dist;
			}
		}
	}
	return sm_coord;
}

void showMap(void) //화면에 출력
{
	int i, j;
	for (i = 0; i < SZ; i++)
	{
		for (j = 0; j < SZ; j++)
		{
			printf("%c", map[i][j]);
		}
		printf("\n");
	}
}


// main 함수
int main(void)
{
	struct coord next; // 다음 번에 방문한 vertex의 row, col
	int r, c;

	initVertexInfo(); //경로탐색 시작위치 (0,0)

	vertexes[0][0].dist = 0; // 시작하는 노드
	vertexes[0][0].found = 1; // 시작하는 노드이기 때문에. 최단거리가 바로 결정됨

	checkAllNeighbors(0, 0); // 새로운 위치로부터 다른 vertex들에 대한 거리 정보를 업데이트하는 함수

	// Dijkstra 알고리즘 수행완료
	while (1)
	{
		next = findNextVertex(); // 최단 경로가 알려지지 않은 vertex 중에, 경로가 제일 짧은 것
		if ((next.row == -1) && (next.col == -1))
		{
			break;
		}
		vertexes[next.row][next.col].found = 1; // (next.row, next.col)까지 최단경로 찾았음.
		checkAllNeighbors(next.row, next.col); 
	}

	// 찾은 경로를 보여주자.
	// Dijkstra 알고리즘 특성상, 최종 도착지부터 거꾸러 추정해 오면
	// 경로를 알 수 있다.
	r = SZ - 1;
	c = SZ - 1;

	while (1)
	{
		int prev_row, prev_col;
		map[r][c] = '^'; //지도 상에서 어떤 경로를 거쳤는지 보여주기 위한 표시

		prev_row = vertexes[r][c].prev_row;
		prev_col = vertexes[r][c].prev_col;

		if (prev_row == 0 && prev_col == 0) // 시작점으로 돌아왔음.
		{
			map[prev_row][prev_col] = '^';
			break;
		}

		r = prev_row;
		r = prev_col;
	}

	showMap();
	return 0;
}
