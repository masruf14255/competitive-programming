/*
            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!
            Al Mashruf Tonoy
            Department of CSE, Daffodil Internatinal University.
*/


int array[10000][10000];

vector< int > array;
vector< double > water;
vector< long long > balance;
vector< char > characters;
vector< day > diary;
int main() {
    vector< int > v;
    v.push_back( 1 );
    v.push_back( 2 );
    v.push_back( 3 );
    v.push_back( 4 );

    for(int i=0; i<v.size(); i++) cout << v[i] << endl;

    return 0;
}
int main() {
    vector< int > v, t;
    v.push_back( 1 );
    v.push_back( 2 );
    v.push_back( 3 );
    v.push_back( 4 );

    t = v; // copying
    for(int i=0; i<t.size(); i++) cout << t[i] << endl;

    return 0;
}
vector< int > v[100];

vector< vector< int > > v;

vector< vector< vector< int > > > v; // 3 dimensional


-----------string------------

int main() {
    string a, b, c;
    a = "this is a string"; // easy assigning
    b = a; // copy hoye gelo! :O
    c = a + b // c te rakhlam a ar b er concatation
    cout << c << endl; // print korlam
    printf("%s\n", c.c_str() ); // printf diyei korlam na hoy

    cout << c.size() << endl; // length print korlam
    for(int i=0; i<c.size(); i++) cout << c[i] ;

// ekta ekta kore character print korlam

    return 0;
}
vector< string > vs;

-----------stack------

//lifo

stack< int > st;
    st.push( 100 ); // inserting 100
    st.push( 101 ); // inserting 101
    st.push( 102 ); // inserting 102

    while( !st.empty() ) {
        cout << st.top() << endl; // printing the top
        st.pop(); // removing that one
    }

---------queue-------

queue< int > q;
    q.push( 100 ); // inserting 100
    q.push( 101 ); // inserting 101
    q.push( 102 ); // inserting 102

    while( !q.empty() ) {
        cout << q.front() << endl; // printing the front
        q.pop(); // removing that one
    }

-------priority queue-----------

priority_queue< int > q;
    q.push( 10230 ); // inserting 10230
    q.push( 1021 ); // inserting 1021
    q.push( 102322 ); // inserting 102322

    while( !q.empty() ) {
        cout << q.top() << endl; // printing the top
        q.pop(); // removing that one
    }
-------iterator----
vector< int > :: iterator i;
    vector< double > :: iterator j;

    vector< int > v; v.pb( 1 ); v.pb( 2 ); v.pb( 3 );
    vector< int > :: iterator i;
    for( i = v.begin(); i < v.end(); i++ ) {
        printf("%d\n", *i);
        // ei khane gola kato!
    }

sort( v.begin(), v.end() );


struct data {
    char name[100];
    int height, weight;
    long long income;
};


bool compare( data a, data b ) {
    if( a.income == b.income ) {
        if( a.height == b.height ) {
            if( a.weight == b.weight )

              return strlen( a.name ) < strlen( b.name );
            else return a.weight < b.weight;
        }else return a.height > b.height;
    }else return a.income > b.income;
}
sort( v.begin(), v.end(), compare );
struct data {
    char name[100];
    int height, weight;
    long long income;

    bool operator < ( const data& b ) const {
        if( income == b.income ) {
            if( height == b.height ) {
                if( weight == b.weight )
                   return strlen( name ) < strlen( b.name );
                else return weight < b.weight;
            }else return height > b.height;
        }else return income > b.income;
    }

};

sort( v.begin(), v.end() );
data array[100];

sort( array, array + n );
sort( array+3, array+11 );

set< int > s;
    s.insert( 10 ); s.insert( 5 ); s.insert( 9 );

    set< int > :: iterator it;
    for(it = s.begin(); it != s.end(); it++) {
        cout << *it << endl;
    }

map< string, int  > m;
    string goru;

    while( cin >> goru ) {
        if( goru == "moro" ) break;
        m[ goru ] ++;
        cout << goru <<" ase " << m[ goru ] << " ta :D " << endl;
    }

    char line[1000];
    while( gets( line ) ) {
        stringstream ss( line ); // initialize kortesi
        int num; vector< int > v;
        while( ss >> num ) v.push_back( num );
        sort( v.begin(), v.end() );
        // print routine
    }

struct pair {
    int first, second;
}
pair< int, int > p;
pair< int, int > p;
pair< int, double > x;
pair< double, string > moru;
pair< goru, goru > fau;

vector< int > v;
    for(int i=0; i<11; i++) v.push_back( i );

    do {
        // protitat jama prottekke porai dekho shukh maximize hochche kina
    }while( next_permutation( v.begin(), v.end() ) );

    vector< int > nacho;

reverse( nacho.begin(), nacho.end() );
