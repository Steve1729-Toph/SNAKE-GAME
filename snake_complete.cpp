void Init(SNAKE& snake){
    snake.len = 4;
    int x = 75, y = 20;
    for(int i = 0; i < snake.len; ++i){
        snake.a[i].x = x;
        snake.a[i].y = y;
        x--;
    }
}
void Draw_Snake(SNAKE& snake){
    int i;
    for(i = 0; i < snake.len; ++i){
        gotoxy(snake.a[i].x, snake.a[i].y);
        (i == 0) ? printf("%c",254):printf("%c",219);
    }
}
void Run(SNAKE& snake, int dir){
    for (int i = snake.len; i > 0; --i){
        snake.a[i].x = snake.a[i-1].x;
        snake.a[i].y = snake.a[i-1].y;
    }
    switch (dir)
    {
    case 0://huong ben phai = 0
        snake.a[0].x = snake.a[0].x + 1;
        break;
    case 1://huong di xuong = 1
        snake.a[0].y = snake.a[0].y + 1;
        break;
    case 2://huong ben trai = 2
        snake.a[0].x = snake.a[0].x - 1;
        break;
    case 3://huong di len = 3
        snake.a[0].y = snake.a[0].y - 1;
        break;
    }
}