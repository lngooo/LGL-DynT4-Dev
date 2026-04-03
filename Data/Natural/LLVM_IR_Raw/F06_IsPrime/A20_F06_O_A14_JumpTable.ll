@__const.IsPrime.targets = constant [3 x i8*] [i8* blockaddress(@IsPrime, %11), i8* blockaddress(@IsPrime, %33), i8* blockaddress(@IsPrime, %34)]
@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @IsPrime(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca [3 x i8*]
  store i32 %0, i32* %3
  %6 = load i32, i32* %3
  %7 = icmp slt i32 %6, 2
  br i1 %7, label %8, label %9
8:
  store i32 0, i32* %2
  br label %35
9:
  store i32 2, i32* %4
  br label %11
11:
  %12 = load i32, i32* %4
  %13 = load i32, i32* %4
  %14 = mul nsw i32 %12, %13
  %15 = load i32, i32* %3
  %16 = icmp sgt i32 %14, %15
  br i1 %16, label %17, label %20
17:
  %18 = getelementptr inbounds [3 x i8*], [3 x i8*]* %5, i64 0, i64 1
  %19 = load i8*, i8** %18
  br label %37
20:
  %21 = load i32, i32* %3
  %22 = load i32, i32* %4
  %23 = srem i32 %21, %22
  %24 = icmp eq i32 %23, 0
  br i1 %24, label %25, label %28
25:
  %26 = getelementptr inbounds [3 x i8*], [3 x i8*]* %5, i64 0, i64 2
  %27 = load i8*, i8** %26
  br label %37
28:
  %29 = load i32, i32* %4
  %30 = add nsw i32 %29, 1
  store i32 %30, i32* %4
  %31 = getelementptr inbounds [3 x i8*], [3 x i8*]* %5, i64 0, i64 0
  %32 = load i8*, i8** %31
  br label %37
33:
  store i32 1, i32* %2
  br label %35
34:
  store i32 0, i32* %2
  br label %35
35:
  %36 = load i32, i32* %2
  ret i32 %36
37:
  %38 = phi i8* [ %19, %17 ], [ %27, %25 ], [ %32, %28 ]
  indirectbr i8* %38, [label %11, label %33, label %34]
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
  br i1 %7, label %8, label %9
8:
  store i32 1, i32* %3
  br label %16
9:
  %10 = load i8**, i8*** %5
  %11 = getelementptr inbounds i8*, i8** %10, i64 1
  %12 = load i8*, i8** %11
  %13 = call i32 @atoi(i8* %12)
  %14 = call i32 @IsPrime(i32 %13)
  %15 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %14)
  store i32 0, i32* %3
  br label %16
16:
  %17 = load i32, i32* %3
  ret i32 %17
}
declare i32 @printf(i8*, ...)
define available_externally i32 @atoi(i8* nonnull %0) {
  %2 = alloca i8*
  store i8* %0, i8** %2
  %3 = load i8*, i8** %2
  %4 = call i64 @strtol(i8* %3, i8** null, i32 10)
  %5 = trunc i64 %4 to i32
  ret i32 %5
}
declare i64 @strtol(i8*, i8**, i32)
