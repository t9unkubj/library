template<class T>
struct monoid{
    T a,b;
    monoid()=default;
    monoid(T a,T b):a(a),b(b){}
    static monoid<T> op(monoid<T> a,monoid<T> b){
        return monoid<T>(a.a*b.a,a.b*b.a+b.b);
    }
    static monoid<T> e(){
        return monoid(1,0);
    }
};
