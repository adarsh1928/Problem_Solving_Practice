import socket,time

def add(x,y):
    return x+y
def mult(x,y):
    return x*y
s=socket.socket()
print('server socket')
host='127.0.0.1'    
port=9999
s.bind(("localhost",port))
s.listen(3)
print('waiting for connection')
while True:
    c,addr=s.accept()
    print('Client is connected',addr)
    x=int(c.recv(1024).decode())
    print(f"X is recieved {x}")
    y=int(c.recv(1024).decode())
    print(f"Y is recieved {y}")
    z=add(x,y)
    print(z)
    p=mult(x,y)
    print(p)
    c.send(bytes(str(z),'utf-8'))
    time.sleep(1)
    c.send(bytes(str(p),'utf-8'))
    c.close()