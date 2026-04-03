@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @Vka0(i32 %0, i32 %1) {
  %3 = alloca i32
  %4 = alloca i32
  store i32 %0, i32* %3
  store i32 %1, i32* %4
  %5 = load i32, i32* %4
  %6 = load i32, i32* %4
  %7 = mul nsw i32 %5, %6
  %8 = load i32, i32* %3
  %9 = icmp sgt i32 %7, %8
  br i1 %9, label %10, label %11
10:
  br label %24
11:
  %12 = load i32, i32* %3
  %13 = load i32, i32* %4
  %14 = srem i32 %12, %13
  %15 = icmp eq i32 %14, 0
  br i1 %15, label %16, label %17
16:
  br label %22
17:
  %18 = load i32, i32* %3
  %19 = load i32, i32* %4
  %20 = add nsw i32 %19, 1
  %21 = call i32 @Vka0(i32 %18, i32 %20)
  br label %22
22:
  %23 = phi i32 [ 0, %16 ], [ %21, %17 ]
  br label %24
24:
  %25 = phi i32 [ 1, %10 ], [ %23, %22 ]
  ret i32 %25
}
define dso_local i32 @Lc(i32 %0) {
  %2 = alloca i32
  store i32 %0, i32* %2
  %3 = load i32, i32* %2
  %4 = icmp slt i32 %3, 2
  br i1 %4, label %5, label %6
5:
  br label %9
6:
  %7 = load i32, i32* %2
  %8 = call i32 @Vka0(i32 %7, i32 2)
  br label %9
9:
  %10 = phi i32 [ 0, %5 ], [ %8, %6 ]
  ret i32 %10
}
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
  %14 = call i32 @Lc(i32 %13)
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
