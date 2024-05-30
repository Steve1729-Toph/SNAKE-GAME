bool touch(SNAKE& , int& , int&){
    for(int i = 0; i < ?.len; ++i){
        if( ?== a[i].x &&  == .a[i].y)
            return true;
    }
    return false;
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