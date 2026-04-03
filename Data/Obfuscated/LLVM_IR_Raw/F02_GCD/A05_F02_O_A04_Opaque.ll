@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @VuO(i32 %0, i32 %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  store i32 %0, i32* %4
  store i32 %1, i32* %5
  %6 = load i32, i32* %5
  %7 = icmp eq i32 %6, 0
  br i1 %7, label %8, label %18
8:
  %9 = load i32, i32* %4
  %10 = load i32, i32* %4
  %11 = mul nsw i32 %9, %10
  %12 = add nsw i32 %11, 1
  %13 = icmp sgt i32 %12, 0
  br i1 %13, label %14, label %17
14:
  %15 = load i32, i32* %4
  %16 = call i32 @abs(i32 %15)
  store i32 %16, i32* %3
  br label %27
17:
  br label %18
18:
  %19 = load i32, i32* %5
  %20 = call i32 @abs(i32 %19)
  %21 = load i32, i32* %4
  %22 = call i32 @abs(i32 %21)
  %23 = load i32, i32* %5
  %24 = call i32 @abs(i32 %23)
  %25 = srem i32 %22, %24
  %26 = call i32 @VuO(i32 %20, i32 %25)
  store i32 %26, i32* %3
  br label %27
27:
  %28 = load i32, i32* %3
  ret i32 %28
}
declare i32 @abs(i32)
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %6 = load i32, i32* %4
  %7 = icmp slt i32 %6, 3
  br i1 %7, label %8, label %9
8:
  store i32 1, i32* %3
  br label %20
9:
  %10 = load i8**, i8*** %5
  %11 = getelementptr inbounds i8*, i8** %10, i64 1
  %12 = load i8*, i8** %11
  %13 = call i32 @atoi(i8* %12)
  %14 = load i8**, i8*** %5
  %15 = getelementptr inbounds i8*, i8** %14, i64 2
  %16 = load i8*, i8** %15
  %17 = call i32 @atoi(i8* %16)
  %18 = call i32 @VuO(i32 %13, i32 %17)
  %19 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %18)
  store i32 0, i32* %3
  br label %20
20:
  %21 = load i32, i32* %3
  ret i32 %21
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
