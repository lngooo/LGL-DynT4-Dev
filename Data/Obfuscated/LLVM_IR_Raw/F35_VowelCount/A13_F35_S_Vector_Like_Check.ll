@__const.laG7.jYvP = constant [10 x i8] c"aeiouAEIOU"
@.str = constant [3 x i8] c"0\0A\00"
@.str.1 = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @laG7(i8* %0) {
  %2 = alloca i8*
  %3 = alloca [10 x i8]
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  store i8* %0, i8** %2
  call void @llvm.memcpy.p0i8.p0i8.i64(i8* align 1 %8, i8* align 1 getelementptr inbounds ([10 x i8], [10 x i8]* @__const.laG7.jYvP, i32 0, i32 0), i64 10, i1 false)
  store i32 0, i32* %4
  br label %10
10:
  %11 = load i8*, i8** %2
  %12 = load i8, i8* %11
  %13 = icmp ne i8 %12, 0
  br i1 %13, label %14, label %43
14:
  store i32 0, i32* %5
  br label %16
16:
  %17 = load i32, i32* %5
  %18 = icmp slt i32 %17, 10
  br i1 %18, label %20, label %19
19:
  store i32 5, i32* %6
  br label %37
20:
  %21 = load i8*, i8** %2
  %22 = load i8, i8* %21
  %23 = sext i8 %22 to i32
  %24 = load i32, i32* %5
  %25 = sext i32 %24 to i64
  %26 = getelementptr inbounds [10 x i8], [10 x i8]* %3, i64 0, i64 %25
  %27 = load i8, i8* %26
  %28 = sext i8 %27 to i32
  %29 = icmp eq i32 %23, %28
  br i1 %29, label %30, label %33
30:
  %31 = load i32, i32* %4
  %32 = add nsw i32 %31, 1
  store i32 %32, i32* %4
  store i32 5, i32* %6
  br label %37
33:
  br label %34
34:
  %35 = load i32, i32* %5
  %36 = add nsw i32 %35, 1
  store i32 %36, i32* %5
  br label %16
37:
  br label %39
39:
  br label %40
40:
  %41 = load i8*, i8** %2
  %42 = getelementptr inbounds i8, i8* %41, i32 1
  store i8* %42, i8** %2
  br label %10
43:
  %44 = load i32, i32* %4
  store i32 1, i32* %6
  ret i32 %44
}
declare void @llvm.memcpy.p0i8.p0i8.i64(i8* noalias nocapture writeonly, i8* noalias nocapture readonly, i64, i1 immarg)
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %6 = load i32, i32* %4
  %7 = icmp slt i32 %6, 2
  br i1 %7, label %8, label %10
8:
  %9 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str, i64 0, i64 0))
  store i32 0, i32* %3
  br label %16
10:
  %11 = load i8**, i8*** %5
  %12 = getelementptr inbounds i8*, i8** %11, i64 1
  %13 = load i8*, i8** %12
  %14 = call i32 @laG7(i8* %13)
  %15 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str.1, i64 0, i64 0), i32 %14)
  store i32 0, i32* %3
  br label %16
16:
  %17 = load i32, i32* %3
  ret i32 %17
}
declare i32 @printf(i8*, ...)
