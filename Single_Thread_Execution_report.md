Single Thread Execution: Trong một vài trường hợp, một vài method có thể truy cập đến data hoặc shared resource và làm lỗi kết quả nếu có xử lý đồng thời ở nhiều thread cùng thời điểm. Single Thread Execution là partern để giải quyết vấn đề sai sot do việc thực thi một method đồng thời.

Các khái niệm
    Shared Resource: Là properties của các object được sử dụng chung cho các thread khác nhau
    Critical Section: Là đoạn code mà nếu chạy trong nhiều thread song song có thể dẫn tới việc đọc, ghi giá trị không phù hợp, làm sai loigic.
    Data Race: là trường hợp 2 thread cùng sử dụng, cùng đọc - ghi giá trị vào 1 shared resource. Điều này dẫn đến kết quả cuối cùng là shared resource có thể nhận được giá trị không đúng.
    DeadLock: là trường hợp cả 2 thread đang ở trạng thái chờ thread còn lại unlock resource. Vì cả 2 thread cứ chờ thread còn lại unlock nên bị chờ mãi mãi mà không thực hiện việc gì hết
    Safe Method: Là method dù có được gọi ở nhiều thread khác nhau thì cũng không gây ra bất cứ vấn đề gì
    Unsafe Method: Là method nếu đươc gọi ở nhiều thread khác nhau thì sẽ làm sai logic. Vì vậy mà các method như thế này khi sử dụng với nhiều thread thì phải có một lớp bảo vệ riêng để đảm bảo chỉ có 1 thread được phép gọi hàm unsafe ở một thời điểm
    Atomic operation: là hành động được đảm bảo chỉ được thực hiện ở duy nhất 1 thread ở một thời điểm. Trong qua trình atomic operation đang thực hiện thì các thread khác sẽ không thể truy cập vào resource mà atomic operation đang sử dụng.

Trường hợp nào nên dùng Single Threaded Execution
    Có multi thread
    Có shared resource có thể truy cập từ nhiều thread khác nhau
    Có phát sinh write vào shared resource. Nếu chỉ read thôi thì vẫn ko cần thiết phải dùng Single Threaded Execution
Điều kiện xảy ra deadlock
    Có nhiều shared resource
    Các shared resource có thể bị chiếm mà ko cần có thứ tự
    Các thread chiếm các shared resource xong lườm nhau mà ko ai chịu nhả ra.
4 tiêu chí của multithread
    Safety
    Liveness
    Reusability
    Performance
Các Pattern liên quan tới Single Threaded Execution
    Guarded Suspension
    Read-Write Lock
    Immutable
    Thread-Specific Storage
