bool touch(SNAKE& , int& , int&){
    for(int i = 0; i < ?.len; ++i){
        if( ?== a[i].x &&  == .a[i].y)
            return true;
    }
    return false;
}
void Food(SNAKE& ,int& res_X, int& res_Y){
    color = rand() % (15 - 1) + 1;
    do{
        res_X = rand() % () + ;
        res_Y = rand() % () + ;
    }while(touch(snake, res_X, res_Y)); 
}
void _Food(int& res_X, int& res_Y){
    gotoxy(res_X, res_Y);
    printf("%c", 254);
} 
bool _Snake(SNAKE& , int res_X, int res_Y){
    return (res_X == .a[0].x) && (res_Y == .a[0].y);
}
void Xu_Ly(SNAKE& snake, int& res_X, int& res_Y){
    if(check_Snake(snake, res_X, res_Y)){
        snake.len++;
        Create_Food(snake, res_X, res_Y);
        Draw_Food(res_X, res_Y);
    }
}
bool GameOver(SNAKE ){
    if (snake.a[0].x ==  || snake.a[0].x ==  || snake.a[0].y ==  || snake.a[0].y == )
        return true;
    return check_touch_snake(snake); 
}
bool snake(SNAKE& ){
    for(int i = 1; i <= .len; ++i){
        if(.a[i].x == .a[0].x && .a[i].y == .a[0].y)
            return true;
    }
    return false;
}