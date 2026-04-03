define dso_local void @AXgR(i8* %0, i8* %1) {
  %3 = alloca i8*
  %4 = alloca i8*
  store i8* %0, i8** %3
  store i8* %1, i8** %4
  %5 = load i8*, i8** %3
  %6 = load i8, i8* %5
  %7 = icmp ne i8 %6, 0
  br i1 %7, label %10, label %8
8:
  %9 = load i8*, i8** %4
  store i8 0, i8* %9
  br label %28
10:
  %11 = load i8*, i8** %3
  %12 = load i8, i8* %11
  %13 = zext i8 %12 to i32
  %14 = call i32 @isspace(i32 %13)
  %15 = icmp ne i32 %14, 0
  br i1 %15, label %24, label %16
16:
  %17 = load i8*, i8** %3
  %18 = load i8, i8* %17
  %19 = load i8*, i8** %4
  store i8 %18, i8* %19
  %20 = load i8*, i8** %3
  %21 = getelementptr inbounds i8, i8* %20, i64 1
  %22 = load i8*, i8** %4
  %23 = getelementptr inbounds i8, i8* %22, i64 1
  call void @AXgR(i8* %21, i8* %23)
  br label %28
24:
  %25 = load i8*, i8** %3
  %26 = getelementptr inbounds i8, i8* %25, i64 1
  %27 = load i8*, i8** %4
  call void @AXgR(i8* %26, i8* %27)
  br label %28
28:
  ret void
}
declare i32 @isspace(i32)
define dso_local void @sihz(i8* %0) {
  %2 = alloca i8*
  store i8* %0, i8** %2
  %3 = load i8*, i8** %2
  %4 = load i8*, i8** %2
  call void @AXgR(i8* %3, i8* %4)
  ret void
}
