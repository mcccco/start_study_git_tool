#include <stdio.h>

int main(){
    printf("hello git\n");
    printf("git init\n"); //创建并初始化git仓库
    printf("git branch\n"); //查看所有分支
    printf("git branch $name\n"); //创建新的分支，$name为新分支的名称
    printf("git add $file\n");  //将工作区修改的文件传入暂存区,$file为文件名
    printf("git commit -m \"$context\"\n"); //将暂存区的内容提交到版本库，$context为提交说明
    printf("git checkout $branch"); //切换分支，$branch为要切换的分支名

    return 0;
}