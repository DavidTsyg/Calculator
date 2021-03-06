double sum(double a, double b){
    return a + b;
}
double sub(double a, double b){
    return a - b;
}
double multiply(double a, double b){
    return a*b;
}
double pow1(double a, int b){
    double new_a = 1;
    int i =1;
    if(b >= 0)
    {
        for(i = 1; i <= b; i++){
            new_a = new_a * a;
        }
    }
    else 
    {
        for(i = 1; i <= (-1)*b; i++){
            new_a = new_a / a;
        }    
    }
    return new_a;
}
long double *sqrt1(double a) {
    float x = 1.0;
    float y = 2.0;
    if ( a != 1 && a > 0)
    {
        while ( (y - x) > 0.000001 || (y - x) < -0.000001  )
        {
            x = y;
            y = (float)(x + (float)a/x)/2;
        }
        long double *n = new long double;
        *n = y;
        return n;
    }
    else if ( a == 1 )
    {    
        long double *n = new long double;
        y = 1;
        *n = y;
        return n;
    }
    else if ( a == 0 ) 
    {        
        long double *n = new long double;
        y = 0;
        *n = y;
        return n;
    }
    else if ( a < 0)
    {    
        return nullptr;
    }    
}


double *div(double a, double b){
    if(b)
    {
        double *n = new double;
        *n = a/b;
        return n;
    }        
    else
        return nullptr;
}
