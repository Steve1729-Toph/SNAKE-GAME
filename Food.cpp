bool check_touch(SNAKE& snake, int& res_X, int& res_Y){
    for(int i = 0; i < snake.len; ++i){
        if(res_X == snake.a[i].x && res_Y == snake.a[i].y)
            return true;
    }
    return false;
}
void Create_Food(SNAKE& snake,int& res_X, int& res_Y){
    color = rand() % (15 - 1) + 1;
    SetColor(color);
    do{
        res_X = rand() % (150 - 52 + 1) + 52;
        res_Y = rand() % (24 - 6 + 1) + 6;
    }while(check_touch(snake, res_X, res_Y)); 
}
void Draw_Food(int& res_X, int& res_Y){
    gotoxy(res_X, res_Y);
    printf("%c", 254);
} 

//DA CHINH SUA DUA TREN HAM MAIN