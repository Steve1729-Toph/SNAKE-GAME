@ -1,46 +0,0 @@
class Wall{
public:
void header(){
    int x =___ , y = ___;
    while(x < ___){
        gotoxy(x,y);
        printf("%c",219);
        printf("%c",219);
        x+=2;
    }
}
void footer(){
    int x =___ , y = ___;
    while(x < ___){
        gotoxy(x,y);
        printf("%c",219);
        printf("%c",219);
        x+=2;
    }
}
void left(){
    int x = ___, y =___ ;
    while(y < 35){
        gotoxy(x,y);
        printf("%c",219);
        printf("%c",219);
        y++;
    }
}
void right(){
    int x =___ , y =___ ;
    while(y <= ___){
        gotoxy(x,y);
        printf("%c",219);
        printf("%c",219);
        y++;
    }
}
void Draw_Wall(){
    Draw_Wall_header();
    Draw_Wall_footer();
    Draw_Wall_left();
    Draw_Wall_right();
}//dong nay tai sao vay ?
}