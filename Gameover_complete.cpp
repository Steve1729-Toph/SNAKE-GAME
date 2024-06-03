bool Game_Over(SNAKE snake){
    if (snake.a[0].x == 51 || snake.a[0].x == 151 || snake.a[0].y == 5 || snake.a[0].y == 35)
        return true;
    return check_touch_snake(snake); 
}
bool check_touch_snake(SNAKE& snake){
    for(int i = 1; i <= snake.len; ++i){
        if(snake.a[i].x == snake.a[0].x && snake.a[i].y == snake.a[0].y)
            return true;
    }
    return false;
}