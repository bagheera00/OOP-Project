@Echo off
del .\DeliveryApp.exe
g++ flower.h user.h utils.h stock.h order.h shop.h app.h customer.h driver.h flower.cpp user.cpp utils.cpp stock.cpp order.cpp shop.cpp customer.cpp driver.cpp app.cpp main.cpp -o DeliveryApp.exe