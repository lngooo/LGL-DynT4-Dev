define dso_local i32 @QOH(i8* %0, i32 %1) {
  %3 = alloca i32
  %4 = alloca i8*
  %5 = alloca i32
  store i8* %0, i8** %4
  store i32 %1, i32* %5
  %6 = load i8*, i8** %4
  %7 = load i8, i8* %6
  %8 = icmp ne i8 %7, 0
  br i1 %8, label %10, label %9
9:
  store i32 0, i32* %3
  br label %32
10:
  %11 = load i8*, i8** %4
  %12 = load i8, i8* %11
  %13 = sext i8 %12 to i32
  %14 = call i32 @isspace(i32 %13)
  %15 = icmp ne i32 %14, 0
  br i1 %15, label %16, label %20
16:
  %17 = load i8*, i8** %4
  %18 = getelementptr inbounds i8, i8* %17, i64 1
  %19 = call i32 @QOH(i8* %18, i32 0)
  store i32 %19, i32* %3
  br label %32
20:
  %21 = load i32, i32* %5
  %22 = icmp ne i32 %21, 0
  br i1 %22, label %28, label %23
23:
  %24 = load i8*, i8** %4
  %25 = getelementptr inbounds i8, i8* %24, i64 1
  %26 = call i32 @QOH(i8* %25, i32 1)
  %27 = add nsw i32 1, %26
  store i32 %27, i32* %3
  br label %32
28:
  %29 = load i8*, i8** %4
  %30 = getelementptr inbounds i8, i8* %29, i64 1
  %31 = call i32 @QOH(i8* %30, i32 1)
  store i32 %31, i32* %3
  br label %32
32:
  %33 = load i32, i32* %3
  ret i32 %33
}
declare i32 @isspace(i32)
define dso_local i32 @AZfX8(i8* %0) {
  %2 = alloca i8*
  store i8* %0, i8** %2
  %3 = load i8*, i8** %2
  %4 = call i32 @QOH(i8* %3, i32 0)
  ret i32 %4
}
