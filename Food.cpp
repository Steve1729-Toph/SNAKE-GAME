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