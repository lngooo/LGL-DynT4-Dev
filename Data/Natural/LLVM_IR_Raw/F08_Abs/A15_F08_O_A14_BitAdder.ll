@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @bit_add(i32 %0, i32 %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  store i32 %0, i32* %3
  store i32 %1, i32* %4
  br label %6
6:
  %7 = load i32, i32* %4
  %8 = icmp ne i32 %7, 0
  br i1 %8, label %9, label %20
9:
  %11 = load i32, i32* %3
  %12 = load i32, i32* %4
  %13 = and i32 %11, %12
  store i32 %13, i32* %5
  %14 = load i32, i32* %3
  %15 = load i32, i32* %4
  %16 = xor i32 %14, %15
  store i32 %16, i32* %3
  %17 = load i32, i32* %5
  %18 = shl i32 %17, 1
  store i32 %18, i32* %4
  br label %6
20:
  %21 = load i32, i32* %3
  ret i32 %21
}
define dso_local i32 @Abs(i32 %0) {
  %2 = alloca i32
  %3 = alloca i32
  store i32 %0, i32* %3
  %4 = load i32, i32* %3
  %5 = icmp sge i32 %4, 0
  br i1 %5, label %6, label %8
6:
  %7 = load i32, i32* %3
  store i32 %7, i32* %2
  br label %12
8:
  %9 = load i32, i32* %3
  %10 = xor i32 %9, -1
  %11 = call i32 @bit_add(i32 %10, i32 1)
  store i32 %11, i32* %2
  br label %12
12:
  %13 = load i32, i32* %2
  ret i32 %13
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
  %14 = call i32 @Abs(i32 %13)
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
