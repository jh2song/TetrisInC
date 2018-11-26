#ifndef __PLAY_FUNC_H__

typedef struct _gameInfo
{
	char name[50];
	int curX, curY;
	int curShape;
	int isStart;
	int diff;
	int direction;
	int isGameover;
	int score;
} gameInfo;

// main�� ���̴� �Լ�
void Login(gameInfo *);
void Init(gameInfo *);
void PrintWall();
void CursorDelete(); // Ŀ�� ���ֱ�

void TetrisOneFrame(gameInfo *);

void Speed(gameInfo *GameInfo);
void ScorePrint(gameInfo * GameInfo);

int Keyboard(gameInfo *);

// �ٽ� �Լ�
void MakeTetrisBoard();
int IsCrashCheck(gameInfo *GameInfo, int tetrimino[][4]);
int isNoDownblock(int gameboard[][13], int tetrimino[][4], int, int);
void CopyToGameBoard(int[][13], int[][4], int, int);
void CopyToStacked(int stackedBlock[][11], int tetrimino[][4], int, int);
void LineClearCheck(gameInfo *);
void LineClear(int i, int combo);
void stackedArrange(int row);

void Print();

void RestartInit(gameInfo *);
// �׿� �Լ�
int RandomShape();
void gotoxy(int x, int y);
void DeleteTetrimino(int gameboard[][13], int tetrimino[][4],
	int curX, int curY);

#endif