double sum(float a, float b){
    return a + b;
}
double sub(float a, float b){
    return a - b;
}
double multiply(float a, float b){
    return a*b;
}
double *div(float a, float b){
    if(b)
    {
        double *n = new double;
        *n = a/b;
        return n;
    }        
    else
        return nullptr;
}
double pow1(float a, int b){
    float new_a = 1;
    int i =1;
    for(i = 1; i <= b; i++){
        new_a = new_a * a;
    }
    return new_a;
}
long double sqrt1(double a) {
    double x = 1.0;
    double y = 2.0;
    if ( a != 1 && a != 0 )
    {
        while ( (y - x) > 0.000001 || (y - x) < -0.000001  )
        {
            x = y;
            y = (float)(x + (float)a/x)/2;
        }
    }
    else if ( a == 1 ) y = 1;
    else if ( a == 0 ) y = 0;


    return y;
}
