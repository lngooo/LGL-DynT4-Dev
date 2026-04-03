@__const.qWX.QXZj4 = constant [13 x i32] [i32 1000, i32 900, i32 500, i32 400, i32 100, i32 90, i32 50, i32 40, i32 10, i32 9, i32 5, i32 4, i32 1]
@.str = constant [2 x i8] c"M\00"
@.str.1 = constant [3 x i8] c"CM\00"
@.str.2 = constant [2 x i8] c"D\00"
@.str.3 = constant [3 x i8] c"CD\00"
@.str.4 = constant [2 x i8] c"C\00"
@.str.5 = constant [3 x i8] c"XC\00"
@.str.6 = constant [2 x i8] c"L\00"
@.str.7 = constant [3 x i8] c"XL\00"
@.str.8 = constant [2 x i8] c"X\00"
@.str.9 = constant [3 x i8] c"IX\00"
@.str.10 = constant [2 x i8] c"V\00"
@.str.11 = constant [3 x i8] c"IV\00"
@.str.12 = constant [2 x i8] c"I\00"
@__const.qWX.Wg2 = constant [13 x i8*] [i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str, i32 0, i32 0), i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str.1, i32 0, i32 0), i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.2, i32 0, i32 0), i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str.3, i32 0, i32 0), i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.4, i32 0, i32 0), i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str.5, i32 0, i32 0), i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.6, i32 0, i32 0), i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str.7, i32 0, i32 0), i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.8, i32 0, i32 0), i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str.9, i32 0, i32 0), i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.10, i32 0, i32 0), i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str.11, i32 0, i32 0), i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.12, i32 0, i32 0)]
@.str.13 = constant [4 x i8] c"%s\0A\00"
define dso_local void @qWX(i32 %0, i8* %1) {
  %3 = alloca i32
  %4 = alloca i8*
  %5 = alloca [13 x i32]
  %6 = alloca [13 x i8*]
  %7 = alloca i32
  %8 = alloca i32
  store i32 %0, i32* %3
  store i8* %1, i8** %4
  %13 = load i8*, i8** %4
  %14 = getelementptr inbounds i8, i8* %13, i64 0
  store i8 0, i8* %14
  store i32 10, i32* %7
  store i32 0, i32* %8
  br label %17
17:
  %18 = load i32, i32* %8
  %19 = icmp slt i32 %18, 13
  br i1 %19, label %22, label %20
20:
  br label %57
22:
  %23 = load i32, i32* %7
  %24 = load i32, i32* %7
  %25 = mul nsw i32 %23, %24
  %26 = icmp sge i32 %25, 100
  br i1 %26, label %27, label %53
27:
  br label %28
28:
  %29 = load i32, i32* %3
  %30 = load i32, i32* %8
  %31 = sext i32 %30 to i64
  %32 = getelementptr inbounds [13 x i32], [13 x i32]* %5, i64 0, i64 %31
  %33 = load i32, i32* %32
  %34 = icmp sge i32 %29, %33
  br i1 %34, label %35, label %52
35:
  %36 = load i8*, i8** %4
  %37 = load i32, i32* %8
  %38 = sext i32 %37 to i64
  %39 = getelementptr inbounds [13 x i8*], [13 x i8*]* %6, i64 0, i64 %38
  %40 = load i8*, i8** %39
  %41 = call i8* @strcat(i8* %36, i8* %40)
  %42 = load i32, i32* %8
  %43 = sext i32 %42 to i64
  %44 = getelementptr inbounds [13 x i32], [13 x i32]* %5, i64 0, i64 %43
  %45 = load i32, i32* %44
  %46 = load i32, i32* %3
  %47 = sub nsw i32 %46, %45
  store i32 %47, i32* %3
  %48 = load i32, i32* %7
  %49 = icmp slt i32 %48, 0
  br i1 %49, label %50, label %51
50:
  br label %52
51:
  br label %28
52:
  br label %53
53:
  br label %54
54:
  %55 = load i32, i32* %8
  %56 = add nsw i32 %55, 1
  store i32 %56, i32* %8
  br label %17
57:
  ret void
}
declare void @llvm.memcpy.p0i8.p0i8.i64(i8* noalias nocapture writeonly, i8* noalias nocapture readonly, i64, i1 immarg)
declare i8* @strcat(i8*, i8*)
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  %6 = alloca [100 x i8]
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %7 = load i32, i32* %4
  %8 = icmp slt i32 %7, 2
  br i1 %8, label %9, label %10
9:
  store i32 0, i32* %3
  br label %20
10:
  %12 = load i8**, i8*** %5
  %13 = getelementptr inbounds i8*, i8** %12, i64 1
  %14 = load i8*, i8** %13
  %15 = call i32 @atoi(i8* %14)
  %16 = getelementptr inbounds [100 x i8], [100 x i8]* %6, i64 0, i64 0
  call void @qWX(i32 %15, i8* %16)
  %17 = getelementptr inbounds [100 x i8], [100 x i8]* %6, i64 0, i64 0
  %18 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str.13, i64 0, i64 0), i8* %17)
  store i32 0, i32* %3
  br label %20
20:
  %21 = load i32, i32* %3
  ret i32 %21
}
define available_externally i32 @atoi(i8* nonnull %0) {
  %2 = alloca i8*
  store i8* %0, i8** %2
  %3 = load i8*, i8** %2
  %4 = call i64 @strtol(i8* %3, i8** null, i32 10)
  %5 = trunc i64 %4 to i32
  ret i32 %5
}
declare i32 @printf(i8*, ...)
declare i64 @strtol(i8*, i8**, i32)
