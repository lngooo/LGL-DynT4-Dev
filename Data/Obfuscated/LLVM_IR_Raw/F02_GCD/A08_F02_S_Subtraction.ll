@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @scTs(i32 %0, i32 %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  store i32 %0, i32* %4
  store i32 %1, i32* %5
  %6 = load i32, i32* %4
  %7 = call i32 @abs(i32 %6)
  store i32 %7, i32* %4
  %8 = load i32, i32* %5
  %9 = call i32 @abs(i32 %8)
  store i32 %9, i32* %5
  %10 = load i32, i32* %4
  %11 = icmp eq i32 %10, 0
  br i1 %11, label %12, label %14
12:
  %13 = load i32, i32* %5
  store i32 %13, i32* %3
  br label %33
14:
  br label %15
15:
  %16 = load i32, i32* %5
  %17 = icmp ne i32 %16, 0
  br i1 %17, label %18, label %31
18:
  %19 = load i32, i32* %4
  %20 = load i32, i32* %5
  %21 = icmp sgt i32 %19, %20
  br i1 %21, label %22, label %26
22:
  %23 = load i32, i32* %4
  %24 = load i32, i32* %5
  %25 = sub nsw i32 %23, %24
  store i32 %25, i32* %4
  br label %30
26:
  %27 = load i32, i32* %5
  %28 = load i32, i32* %4
  %29 = sub nsw i32 %27, %28
  store i32 %29, i32* %5
  br label %30
30:
  br label %15
31:
  %32 = load i32, i32* %4
  store i32 %32, i32* %3
  br label %33
33:
  %34 = load i32, i32* %3
  ret i32 %34
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
  %18 = call i32 @scTs(i32 %13, i32 %17)
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
