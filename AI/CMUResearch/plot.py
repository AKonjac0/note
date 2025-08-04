import json
import matplotlib.pyplot as plt

# 示例函数，用于演示如何解析 JSON 并绘制图表
def plot_scores(json_strings, method_names):
    # 存储不同评价指标的分数
    average_scores = []

    # 解析 JSON 字符串并提取分数
    for json_str in json_strings:
        data = json.loads(json_str)
        average_scores.append(data['AVERAGE'])
        

    # 设置柱状图的位置和宽度
    bar_width = 0.2
    r1 = range(len(method_names))
    # r2 = [x + bar_width for x in r1]
    # r3 = [x + bar_width for x in r2]
    # r4 = [x + bar_width for x in r3]

    # 创建柱状图
    # plt.bar(r1, average_scores, color='#004C99', width=bar_width, edgecolor='grey', label='mmlu average score')
    plt.bar(r1, average_scores, color='#5FBFEA', width=bar_width, edgecolor='grey', label='mmlu average score')

    # 添加方法名到 x 轴
    plt.xlabel('training dataset: alpaca_52k, eval dataset: mmlu', fontweight='bold', fontsize=15)
    plt.xticks([r for r in range(len(method_names))], method_names)

    # 设置纵坐标范围从 40 开始，更好地显示差异
    plt.ylim(40, max(average_scores) + 1)
    
    # 添加图例
    plt.legend()
    
    # 展示图表
    plt.show()

# 示例调用
json_strings = [
    '{"AVERAGE": 44.42}',
    '{"AVERAGE": 45.90}',
    '{"AVERAGE": 45.00}',
    '{"AVERAGE": 44.68}',
]
method_names = ['cluster=100', 'cluster=160', 'cluster=200', 'cluster=300']  # 根据你的需求替换为实际的方法名

plot_scores(json_strings, method_names)