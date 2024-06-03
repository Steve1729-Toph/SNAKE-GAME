bool Game_Over(SNAKE snake)
{ 
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
void GAMEOVER(){
    SetColor(6);
    gotoxy(50,5);
   cout << "#####   ###     #   #   #####  ##### ##    ## ##### ######"; 
    gotoxy(50,6); 
    cout << "## __  #   #   ### ###  ##__   #   #  ##  ##  ##___ ##__##";
    gotoxy(50,7);
    cout << "##  #  #####   #  #  #  ##     #   #   #  #   ##    ##  ##";
    gotoxy(50,8);
    cout << "##### ##   ## ##     ## #####  #####    ##    ##### ##   ##";
    gotoxy(65,12);
    SetColor(9);
    cout << "SCORE      : " << score;
    gotoxy(65,13);
    cout << "RECORD     : " << record;
    gotoxy(65,14);
    cout << "PLAY AGAIN : press the space";
    gotoxy(65,15);
    cout << "EXIT       : press E";
}