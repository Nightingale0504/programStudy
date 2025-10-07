import os
import subprocess

# 获取所有的输入文件
input_files = [f for f in os.listdir() if f.startswith('cube') and f.endswith('.in')]

for input_file in input_files:
    # 打开输入文件
    with open(input_file, 'r') as file:
        input_data = file.read()

    # 运行std.cpp并将输出重定向到cube{i}.out
    output_file_name = input_file.replace('.in', '.out')
    subprocess.run(["std.exe"], input=input_data, text=True, stdout=open(output_file_name, 'w'))