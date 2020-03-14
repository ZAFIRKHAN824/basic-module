#include <iostream>
#include "./config.cpp"
using namespace std;

struct State {
    int main_array[3][3];
    bool curr_player;
    _location curr_pos;
    bool game_over;
};

State initialState = {
    {
        {' ', ' ', ' '},
        {' ', ' ', ' '},
        {' ', ' ', ' '},
    },
    0,
    {0, 0},
    false,
};

State state = initialState;


char GetArrowKeysInput()
{
    while(1)
    {
    switch(getch())
    {
    case 72:
        return 'U';
    case 80:
        return 'D';
    case 75:
        return 'L';
    case 77:
        return 'R';
    case 13:
        return 'E';
    }
    }
}

void renderBoard(){
setBgClr(BG_CLR);
int line1y1 = START_POS.y - (BOARD_LINE_LENGTH.y/2 - BOARD_LINE_THICKNESS.y)/2 - BOARD_LINE_THICKNESS.y;
int line1y2 = line1y1 + BOARD_LINE_THICKNESS.y;
int line1x1 = START_POS.x - BOARD_LINE_LENGTH.x/2;
int line1x2 = START_POS.x + BOARD_LINE_LENGTH.x/2;
clrdLine(BOARD_CLR, line1x1, line1y1, line1x2, line1y2);

int line2y1 = START_POS.y + (BOARD_LINE_LENGTH.y/2 - BOARD_LINE_THICKNESS.y)/2 - BOARD_LINE_THICKNESS.y;
int line2y2 = line2y1 + BOARD_LINE_THICKNESS.y;
clrdLine(BOARD_CLR,line1x1,line2y1,line1x2,line2y2);

int line3y1 = START_POS.y - BOARD_LINE_LENGTH.y/2;
int line3y2 = line3y1 + BOARD_LINE_LENGTH.y;
int line3x1 = START_POS.x - (BOARD_LINE_LENGTH.x/2 - BOARD_LINE_THICKNESS.x)/2 - BOARD_LINE_THICKNESS.x;
int line3x2 = line3x1 + BOARD_LINE_THICKNESS.x;
clrdLine(BOARD_CLR,line3x1,line3y1,line3x2,line3y2);

int line4x1 = START_POS.x + (BOARD_LINE_LENGTH.x/2 - BOARD_LINE_THICKNESS.x)/2 - BOARD_LINE_THICKNESS.x;
int line4x2 = line4x1 + BOARD_LINE_THICKNESS.x;
clrdLine(BOARD_CLR,line4x1,line3y1,line4x2,line3y2);
}

void printMarkerOnBoard(char marker, int x, int y){
    _location start = {START_POS.x - TEXT_OFFSET.x, START_POS.y - TEXT_OFFSET.y};
    Locate(start.x + x*TEXT_OFFSET.x, start.y + y*TEXT_OFFSET.y);
    cout << marker;
}

void stateArray2Board()
{
    for(int r=0; r<3; ++r){
        for(int c=0; c<3; ++c){
            printMarkerOnBoard(state.main_array[r][c], r, c);
        }
    }
}

char getCurrMarker(bool currPlayer){
    if(state.curr_player==0)
    {
        return PLAYER_1_MARKER;
    }
    else
    {
        return PLAYER_2_MARKER;
    }
}

void getUserMove()
{
    char Input=GetArrowKeysInput();
    if(Input=='U' && state.curr_pos.y > 0)
        state.curr_pos.y--;
    else if(Input=='D' && state.curr_pos.y < 2)
        state.curr_pos.y++;
    else if(Input=='L' && state.curr_pos.x > 0)
        state.curr_pos.x--;
    else if(Input=='R' && state.curr_pos.x < 2)
        state.curr_pos.x++;
    else if(Input=='E') {
        if(state.main_array[state.curr_pos.x][state.curr_pos.y] == ' ')
            state.main_array[state.curr_pos.x][state.curr_pos.y]= getCurrMarker(state.curr_player);
    }

}


int main(){
    renderBoard();
    while(state.game_over == false)
    {
        stateArray2Board();
        printMarkerOnBoard(getCurrMarker(state.curr_player), state.curr_pos.x, state.curr_pos.y);
        getUserMove();
    }
}
