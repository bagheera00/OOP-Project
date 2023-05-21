@Echo off
@REM del DeliveryApp.exe
g++ flower.h user.h utils.h stock.h order.h shop.h app.h customer.h driver.h utils.cpp flower.cpp user.cpp stock.cpp order.cpp shop.cpp customer.cpp driver.cpp app.cpp main.cpp -o DeliveryApp.exe