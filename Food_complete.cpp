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
bool check_Snake(SNAKE& snake, int res_X, int res_Y){
    return (res_X == snake.a[0].x) && (res_Y == snake.a[0].y);
}
void Xu_Ly(SNAKE& snake, int& res_X, int& res_Y){
    if(check_Snake(snake, res_X, res_Y)){
        SetColor(color);
        snake.len++;
        score += 10;
        Create_Food(snake, res_X, res_Y);
        Draw_Food(res_X, res_Y);
    }
}