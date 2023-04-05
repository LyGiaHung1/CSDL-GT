//https://freetuts.net/cai-dat-hang-doi-queue-bang-mang-mot-chieu-3232.html
#include <iostream>
using namespace std;
/* khởi tạo mảng và các biến cần thiết trong Queue */
int queue[100], n = 100, front = -1, rear = -1;
/* hàm thêm phần tử vào trong Queue */
void push() {
    // khởi tạo biến val và đưa nó vào trong hàng đợi
    int val;
    //xét điều kiện hàng đợi đầy, nếu đầy thì không thể thêm phần tử vào được
    if (rear == n - 1)
        cout << "Tran hang doi" << endl;
    //Ngược lại nếu trong hàng đợi vẫn còn chỗ trống thì ta thực hiện thêm phần tử
    else {
        if (front == -1)
            front = 0;
        cout << "Chen phan tu vao hang doi : " << endl;
        //yêu cầu nhập dữ liệu từ bàn phím
        cin >> val;
        //tăng vị trí hiện tại lên một
        rear++;
        //thêm phần tử đó vào vị trí hiện tại rear
        queue[rear] = val;
    }
}
/* hàm xóa phần tử khỏi Queue */
void pop() {
    //nếu trong hàng đợi rỗng thì không thể xóa phần tử, ta thực hiện return và kết thúc hàm
    if (front == -1 || front > rear) {
        cout << "Khong the xoa phan tu trong hang doi ";
        return;
    }
    //Ngược lại ta sẽ thực hiện lấy phần tử đó ra và xóa luôn khỏi hàng đợi
    else {
        cout << "Phan tu da xoa khoi hang doi la: " << queue[front] << endl;
        front++;;
    }
}
int Remove(QUEUE& q) {
    int x;
    //neu hang doi khong rong
    if (!IsEmpty(q)) {
        //gan x bang phan tu dau tien cua hang doi
        x = q.A[q.front];
        //tang bien front len 1 don vi 
        q.front++;
        //tra ve phan tu lay duoc
        return x;
    }
    else {//nguoc lai hang doi rong
        q.front = 0; q.rear = -1;
    }
}
/* hàm in các phần tử trong Queue ra màn hình */
void print() {
    //nếu hàng đợi rỗng ta sẽ thông báo 
    if (front == -1)
        cout << "Hang doi rong!!" << endl;
    //Ngược lại nếu hàng đợi có phần tử thì ta sẽ xuất lần lượt các phần tử đó ra màn hình
    else {
        cout << "Cac phan tu trong hang doi la: ";
        //sử dụng vòng lặp for để xuất lần lượt các phần tử
        for (int i = front; i <= rear; i++)
            cout << queue[i] << " ";
        cout << endl;
    }
}
/* hàm main để tạo menu và gọi các hàm đã tạo ở trên */
int main() {
    int ch;
    cout << "1) Them phan tu vao Queue" << endl;
    cout << "2) Xoa phan tu khoi Queue" << endl;
    cout << "3) Hien thi tat ca cac phan tu trong Queue" << endl;
    cout << "4) Thoat" << endl;
    do {
        cout << "Nhap lua chon cua ban: " << endl;
        cin >> ch;
        switch (ch) {
        case 1: push();
            break;
        case 2: pop();
            break;
        case 3: print();
            break;
        case 4: cout << "Kết thúc" << endl;
            break;
        default: cout << "Lựa chọn của bạn không đúng" << endl;
        }
    } while (ch != 4);
}