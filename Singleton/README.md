# Singleton 
1. Context:
- Hệ thống đang có nhiều object kích thước lớn, trong đó có các properties như nhau có thể đóng gói chung trong 1 object để sử dụng lại.
- Hệ thống có giao tiếp với các client số lượng giới hạn như database hoặc ngoại vi như màn hình, controller ...

2. Advantage:
- Tái sử dụng lại properties của 1 object, không phải clone ra nhiều object gây tiêu tốn nhiều tài nguyên hệ thống,
- Đồng nhất các trạng thái khi sử dụng với cùng 1 client giống nhau,
- Khi dùng với 1 client thì cũng dễ dàng hơn khi chạy multithread, không còn việc nhiều object cùng connect đến 1 client

3. How to do:
- Thực hiện bằng cách để cho chính class quản lý các object tạo ra từ nó thông qua con trỏ hoặc reference
- Để contructor (gồm cả copy contructor) trong label private,
- Keep object reference bằng static properties
- Tạo static getInstance method để lấy object ra sử dụng

4. Issue:
- Trong trường hợp multithread thì cần chú ý khi getInstance lần đầu, nếu cả 2 thread cùng gọi vào lần đầu thì có thể điều kiện check bị null đúng cho cả 2 thread và 2 thread sẽ tạo ra 2 object.
- Tuy rằng tạo 2 object nhưng biến static chỉ keep 1 object nên gây ra 2 vấn đề:
    * Logic khởi tạo được chạy 2 lần do tạo ra 2 object
    * Bị leak memory do biến static chỉ keep được 1 object