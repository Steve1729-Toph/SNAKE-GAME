@ -1,46 +0,0 @@
class Wall{
public:
void header(){
    int x = 50, y = 5;
    while(x < 151){
        gotoxy(x,y);
        printf("%c",219);
        printf("%c",219);
        x+=2;
    }
}
void footer(){
    int x = 50, y = 35;
    while(x < 151){
        gotoxy(x,y);
        printf("%c",219);
        printf("%c",219);
        x+=2;
    }
}
void left(){
    int x = 50, y = 5;
    while(y < 35){
        gotoxy(x,y);
        printf("%c",219);
        printf("%c",219);
        y++;
    }
}
void right(){
    int x = 151, y = 5;
    while(y <= 35){
        gotoxy(x,y);
        printf("%c",219);
        printf("%c",219);
        y++;
    }
}
void Draw_Wall(){
    SetColor(7);
    Draw_Wall_header();
    Draw_Wall_footer();
    Draw_Wall_left();
    Draw_Wall_right();
}//dong nay tai sao vay ?
}