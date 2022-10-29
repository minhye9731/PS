//
//  main.cpp
//  PS
//
//  Created by 강민혜 on 10/29/22.
//

// 1330
//#include <iostream>
//
//using namespace std;
//
//int main() {
//
//    int a, b;
//
//    cin >> a >> b;
//
//    if (a > b) {
//        cout << ">";
//    }
//    else if (a < b) {
//        cout << "<";
//    }
//    else {
//        cout << "==";
//    }
//
//}

//#include <iostream>
//
//using namespace std;
//
//int main() {
//
//    int n;
//
//    cin >> n;
//
//    if (n<=100 && n>=90) {
//        cout << "A";
//    }
//    else if (n<=89 && n>=80) {
//        cout << "B";
//    }
//    else if (n<=79 && n>=70) {
//        cout << "C";
//    }
//    else if (n<=69 && n>=60) {
//        cout << "D";
//    }
//    else {
//        cout << "F";
//    }
//
//}

//#include <iostream>
//using namespace std;
//
//int main() {
//
//    int n, a, b;
//
//    cin >> n;
//
//    while(n--) {
//        cin >> a >> b;
//        cout << a + b << "\n"; // 꼭 출력하고 줄바꿈을 해주어야 함!!!
//    }
//}

//#include <iostream>
//
//using namespace std;
//
//int main() {
//
//    int n;
//    int total = 0;
//    cin >> n;
//
//    for(int i=1; i<=n; i++) {
//        total += i;
//    }
//    cout << total;
//
//}

//#include <iostream>
//
//using namespace std;
//
//int main() {
//
//    int n;
//    cin >> n;
////    int sum = 0;
////    string isCorrect; // read한 해당 퀴즈 결과의 길이를 구함
////    int size = s.size();
//
//
//    while(n--){ // 퀴즈 개수만큼 아래 로직을 돌려라
//        string s;
//        cin >> s; // 퀴즈 결과 한 줄을 read
//        int score = 0, streak = 0; // 점수, 연속된 숫자
//
//        // 퀴즈 길이만큼 아래 로직을 돌려라
//        for(int i=0; i<s.size(); i++) {
////            char isCorrect = s[i]; // 개별 퀴즈 정답여부
//
//            // O이면 1더하고, x면 0 어쩌구
//            if(s[i] == 'O') {
//                streak++;
//                score += streak;
//            }
//            else {
//                streak = 0;
//            }
//        }
//
//        cout << score << "\n";
//    }
//
//}

//#include <iostream>
//
//using namespace std;
//
//int main() {
////    int n;
////    cin >> n; // 주어지는 정수의 개수, 5
//
////    string str; // 두번째 입력줄을 문자열로 정의
////    cin >> str; // 두번째 입력줄 받기 "20 10 35 30 7"
////    getline(cin, str, ' '); // 두번째 입력줄 받기 "20 10 35 30 7"
//
//    int n, min_num = 1000000, max_num = -1000000;
//    cin >> n;
//    for(int i=1; i<=n; i++){
//        int x;
//        cin >> x;
//        if(x > max_num){
//            max_num = x; // 변수 업데이트
//        }
//        if(x < min_num){
//            min_num = x; // 변수 업데이트
//        }
//    }
//    cout << min_num <<' '<<max_num;
//
////    int scoreGroup[n];
//
//}

// H
//#include <iostream>
//#include <sstream>
//#include <string>
//#include <vector>
//#include <stack> // 맥 사용자는 스택을 따로 불러야 한다.
//using namespace std;
//
//int main() {
//
//    int n; // 명령의 수
//    cin >> n;
//
//    stack<int> stk; // 빈 배열 생성
//
//    for(int i=1; i<=n; i++){
//        string s; // 'push'과 같은 명령어 읽기
//        cin >> s;
//        if(s == "push") {
//            int x;
//            cin >> x;
//            stk.push(x);
//        }
//        else if(s == "pop"){
//            // 삼항연산자 사용
//            int top = stk.size() ? stk.top() : -1; // size가 empty면 false를 뱉으니까
//            // empty나 size를 통해 빈배열 여부를 확인 가능한데, 강사님은 size를 사용한 방법 선호
//
//            cout<<top<<'\n';
//
//            if(stk.size()){
//                stk.pop();
//            }
//        }
//        else if(s == "size"){
//            int size = stk.size();
//            cout<<size<<'\n';
//        }
//        else if(s == "empty"){
//            cout<<(stk.empty() ? 1 : 0 )<<'\n';
//        }
//        else if(s == "top"){
//            int top = stk.size() ? stk.top() : -1;
//            cout<<top<<'\n';
//        }
//    }
//}

//
//    string order_arr[1000];
//    string order; // 명령 선언
//
//    for(int i=1; i<=n; i++){
//
//        cin >> order; // 명령 한 줄 받기
//        stringstream ss(order);
//        string stringBuffer;
//        vector<string> v;
//        v.clear();
//
//        while (getline(ss, stringBuffer, ' ')) {
//            v.push_back(stringBuffer);
//        }
//
//        for(int i = 0; v.size(); i++){
//            v.push_back(<#const_reference __x#>)
//        }
//
//
////        getline(cin, order);
////        char* str_buff = new char[1000];
////        strcpy(str_buff, order.c_str());
////        char* tok = strtok(str_buff, " ");
//
//
//        if (v[0] == 'push') {
//            st.push(st[1]);
//        } else if (v[0] == 'pop') {
//
//            if(st.empty()) {
//                cout << -1;
//            } else {
//                cout << st.top();
//                st.pop();
//            }
//
//        } else if (tok[0] == 'size') {
//
//            cout << st.size();
//
//        } else if (tok[0] == 'empty') {
//            if (st.empty()) {
//                cout << 1;
//            } else {
//                cout << 0;
//            }
//
//
//        } else if (tok[0] == 'top') {
//            if (st.empty()) {
//                cout << -1;
//            } else {
//                cout << st.top();
//            }
//
//
//        }
//
//    }
//
//
//}

/*
 lldb 특강으로 놓친 부분 (H,I,J,K)
 */

// L
//#include <iostream>
//using namespace std;
//
//int main() {
//
//    int n, a, b;
//
//    cin >> n;
//
//
//        cout << a + b << "\n";
//
//}

//M (나의 풀이)
//#include <iostream>
//#include <stack> // ??
//#include <queue>
//using namespace std;
//
//int main() {
//
//    queue<int> q; // 빈 큐 생성
//    queue<int> y; // 요세푸스 순열 담기용
//
//    int n, k;
//    cin >> n >> k; // N명의 사람
//
//    // 빈 큐에 n개의 수 만큼 int를 순서대로 추가해서 큐를 생성한다
//    for(int i=1; i<=n; i++){
//        q.push(i);
//    }
//
//    cout<<"<"; // 꺽쇠는 직접 넣어준다
    
//    while(n--){ // N명의 사람이 모두 제거될 때까지 계속함
//
//        // k번째 앞까지의 수를 뽑아서 뒤고 붙임
//        for(int i=1; i<k; i++){
//            int a = q.front(); // 맨 앞 원소 별도로 복사해서 뽑아두고
//            q.pop(); // 맨 앞 원소 삭제
//            q.push(a); // 맨 뒤에 x를 삽입
//        }
//
//        // k번째 삭제
//        q.pop();
//
//        // 업데이트된 큐에서의 k번째 수를 오세푸스 순열에 담는다.
//
//    }
    
//    // 강사님 코드
//    for(int i=1; i<n; i++){
//        for(int j=1; j<k; j++){
//            q.push(q.front()); // 맨 앞 요소를 뒤에 붙임
//            q.pop(); // 맨 앞 요소를 삭제
//        }
//
//        cout << q.front() << ", ";
//        q.pop();
//    }
//
//    cout<<q.front()<<">";
//
//}


//N (나의 풀이)
//#include <iostream>
//#include <map>
//using namespace std;
//
//int main() {
//
//    map<int, int> mp;
//
//    int n;
//    cin >> n; //보유한 숫자 카드의 수
//
////    stack<int> stk; // 빈 배열 생성 (갖고있는 전체 카드숫자 담기용)
////    stack<int> target; // 빈 배열 생성 (수량을 체크해야 할 카드번호들 담기용)
//
//    for(int i=1; i<=n; i++){
////        stk.push(i); // 보유한 전체 카드숫자 배열 생성
//
//        // 쌤 풀이
//        int x;
//        cin >> x;
//        mp[x]++; // 오 이렇게 바로 키를 넣어도 된다. 왜냐면 자동으로 밸류가 없으면 밸류값은 0이 들어갈 테니까. 소름
//    }
//
//    int m;
//    cin >> m; // 몇 개 갖고 있는지 구해야 할 수의 개수
//
//    for(int i=1; i<=m; i++){
////        target.push(i); // 보유한 전체 카드숫자 배열 생성
//
//        int x;
//        cin >> x;
////        cout << mp[x] <<' ';
////        cout<<find(const mp[m ] & mp[x])<<' '; 시간초과나면 find를 써보라는데?
//    }
//
//}

// Q 숫자카드
//#include <iostream>
//#include <set>
//using namespace std;
//
//int main() {
//    ios::sync_with_stdio(0);cin.tie(0);
//    int n,m,x; // 보유한 숫자 카드 개수
//    cin>>n;
//    set<int> st; // set은 중복값 없음
//
//    for(int i=1; i<=n; i++){
//        cin>>x;
//        st.insert(x);
//    }
//
//    cin>>m;
//
//    for(int i=1; i<=m; i++){
//        cin>>x;
////        cout<<(st.count(x) ? 1 : 0)<<' '; // 전
//        cout<<st.count(x)<<' '; // 후
//    }
//}

// 11279, 최대 힙

#include <iostream>
#include <queue>
using namespace std;

int main() {
    ios::sync_with_stdio(0);cin.tie(0);
    
    int n;
    cin >> n;
    priority_queue<int> pq;
    
    cout<<"\n";
    
//    for(int i=1; i<=n; i++){
//
//        int x;
//        cin>>x;
//        if (x == 0) {
//            if(stk.empty()){
//                cout<<0;
//            }
//            else {
//                cout<<stk.top()<<"\n";
//                stk.pop();
//            }
//        }
//        else {
//            stk.push(x);
//        }
//    }

    while(n--){
        int x;
        cin>>x;
        pq.push(x); // 어차피 x가 0이어도 pq들어가면 자동으로 맨뒤로 들어가게 됨
        cout<<pq.top()<<"\n";
        pq.pop();
    }
    
}

// 최소 힙
//#include <iostream>
//#include <queue>
//using namespace std;
//
//int main() {
//    ios::sync_with_stdio(0);cin.tie(0);
//
//    int n;
//    cin >> n;
//    priority_queue<int> pq;
//
//
//    while(n--){
//        int x;
//        cin>>x;
//        pq.push(-x); // 음수처리로만 해서 넣으면 됨
//        cout<<-pq.top()<<"\n";
//        pq.pop();
//    }
//
//}

