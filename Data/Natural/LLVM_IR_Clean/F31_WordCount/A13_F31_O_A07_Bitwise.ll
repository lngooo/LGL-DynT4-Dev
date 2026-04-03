define dso_local i32 @WordCount(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  store i8* %0, i8** %2
  store i32 0, i32* %3
  store i32 1, i32* %4
  br label %8
8:
  %9 = load i8*, i8** %2
  %10 = load i8, i8* %9
  %11 = icmp ne i8 %10, 0
  br i1 %11, label %12, label %46
12:
  %14 = load i8*, i8** %2
  %15 = load i8, i8* %14
  %16 = sext i8 %15 to i32
  %17 = icmp eq i32 %16, 32
  br i1 %17, label %28, label %18
18:
  %19 = load i8*, i8** %2
  %20 = load i8, i8* %19
  %21 = sext i8 %20 to i32
  %22 = icmp eq i32 %21, 9
  br i1 %22, label %28, label %23
23:
  %24 = load i8*, i8** %2
  %25 = load i8, i8* %24
  %26 = sext i8 %25 to i32
  %27 = icmp eq i32 %26, 10
  br label %28
28:
  %29 = phi i1 [ true, %18 ], [ true, %12 ], [ %27, %23 ]
  %30 = zext i1 %29 to i64
  %31 = select i1 %29, i32 1, i32 0
  store i32 %31, i32* %5
  %32 = load i32, i32* %4
  %33 = load i32, i32* %5
  %34 = xor i32 %33, -1
  %35 = and i32 %34, 1
  %36 = and i32 %32, %35
  %37 = icmp ne i32 %36, 0
  br i1 %37, label %38, label %41
38:
  %39 = load i32, i32* %3
  %40 = add nsw i32 %39, 1
  store i32 %40, i32* %3
  br label %41
41:
  %42 = load i32, i32* %5
  store i32 %42, i32* %4
  %43 = load i8*, i8** %2
  %44 = getelementptr inbounds i8, i8* %43, i32 1
  store i8* %44, i8** %2
  br label %8
46:
  %47 = load i32, i32* %3
  ret i32 %47
}
