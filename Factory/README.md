# Factory pattern

__Factory pattern giúp hỗ trợ quá trình tạo instance của object đơn giản hơn__

## I. Factory method

### 1. Context:
- Giả sử hệ thống có nhiều object cùng loại, có chung chức năng như các hệ thống Log hoặc Database.
- Ta lấy ví dụ với hệ thống Log.
  - Khi đang trong quá trình develop thì ta sẽ muốn log ra các tool log viewer để có thể debug trong thời gian thực, giúp đỡ quá trình develop hay fix bug đơn giản hơn.
  - Tuy nhiên sau khi đưa lên product thì việc lấy log thời gian thực như vậy lại là thừa và có thể gây ảnh hưởng lớn đến hệ thống. Lúc này ta cần có cơ chế quản lý log khác như log ra file hoặc save log theo cơ chế lazy, để ưu tiên các hoạt động khác.
  - Hoặc đơn giản là tùy vào module mà ta có thể đẩy log vào các hệ thống khác nhau.

  ==> Nếu ta phải làm thủ công cho việc ở từng vị trí đặt log mà gọi hàm log tương ứng thì khả năng sai sót sẽ rất cao. Đó là chưa kể có trường hợp để làm đúng yêu cầu lại phải đặt điều kiện if-else để chọn hệ thống log tương ứng. Điều này lại càng làm giảm effort của hệ thống, gây ảnh hưởng lớn hơn đến người dùng

  ===> __Factory method sẽ giúp xử lý bài toán này một cách hiệu quả hơn__

### 2. Advantage:
- Tách biệt việc tạo instance khởi nơi sử dụng, nơi sử dụng chỉ cần tập trung vào logic, không cần để ý đến quá trình khởi tạo instance, không cần biết instance tạo ra từ class nào
- Giảm thiểu sự phụ thuộc của client code - __Lose Coupling__
- Dễ maintain: khi cần maintain hay upgrade thì chỉ cần sửa lại các class của instance, không ảnh hưởng đến code của client.
### 3. How to do:
- Tạo interface chung cho mỗi loại object
- Viết method tạo instance dựa trên type được truyền vào hoặc get ra từ tình trạng hệ thống (đây chính là lý do pattern này được gọi là __Factory methol__))

![](FactoryMethod.png)

## 2. Abtract Factory

### 1. Context:
- 

### 2. Advantage:
- 
### 3. How to do:
- 

### 4. Issue:
- 