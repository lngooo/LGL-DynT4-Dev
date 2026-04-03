define dso_local void @Y(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8
  store i8* %0, i8** %2
  store i32 0, i32* %3
  store i32 0, i32* %4
  br label %8
8:
  br label %9
9:
  %10 = load i8*, i8** %2
  %11 = load i32, i32* %3
  %12 = sext i32 %11 to i64
  %13 = getelementptr inbounds i8, i8* %10, i64 %12
  %14 = load i8, i8* %13
  %15 = sext i8 %14 to i32
  %16 = icmp eq i32 %15, 0
  br i1 %16, label %17, label %18
17:
  br label %39
18:
  %19 = load i8*, i8** %2
  %20 = load i32, i32* %3
  %21 = sext i32 %20 to i64
  %22 = getelementptr inbounds i8, i8* %19, i64 %21
  %23 = load i8, i8* %22
  store i8 %23, i8* %5
  %24 = load i8, i8* %5
  %25 = zext i8 %24 to i32
  %26 = call i32 @isspace(i32 %25)
  %27 = icmp ne i32 %26, 0
  br i1 %27, label %36, label %28
28:
  %29 = load i8, i8* %5
  %30 = load i8*, i8** %2
  %31 = load i32, i32* %4
  %32 = sext i32 %31 to i64
  %33 = getelementptr inbounds i8, i8* %30, i64 %32
  store i8 %29, i8* %33
  %34 = load i32, i32* %4
  %35 = add nsw i32 %34, 1
  store i32 %35, i32* %4
  br label %36
36:
  %37 = load i32, i32* %3
  %38 = add nsw i32 %37, 1
  store i32 %38, i32* %3
  br label %8
39:
  %40 = load i8*, i8** %2
  %41 = load i32, i32* %4
  %42 = sext i32 %41 to i64
  %43 = getelementptr inbounds i8, i8* %40, i64 %42
  store i8 0, i8* %43
  ret void
}
declare i32 @isspace(i32)
