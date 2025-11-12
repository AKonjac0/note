import numpy as np
import matplotlib.pyplot as plt

# 构造矩阵 A
A = np.array([[1, 4], [4, 1]])

# 生成单位圆上的点
theta = np.linspace(0, 2*np.pi, 100)
circle = np.array([np.cos(theta), np.sin(theta)])

# 应用变换
transformed = A @ circle

print(circle)
# 画图
plt.figure(figsize=(6,6))
plt.plot(circle[0], circle[1], label='Unit Circle', color='blue')
plt.plot(transformed[0], transformed[1], label='Transformed Ellipse', color='red')
plt.axis('equal')
plt.title("Unit Circle → Ellipse under Matrix A")
plt.legend()
plt.grid(True)
plt.show()