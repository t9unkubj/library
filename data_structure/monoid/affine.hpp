template<class T>
struct monoid{
    T a,b;
    monoid()=default;
    monoid(T a,T b):a(a),b(b){}
    static monoid op(T a,T b){
        return monoid(a.a*b.a,a.b*b.a+b.b);
    }
    static monoid e(){
        return monoid(1,0);
    }
};
