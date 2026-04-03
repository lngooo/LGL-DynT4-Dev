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
  br i1 %11, label %12, label %45
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
  %30 = zext i1 %29 to i32
  store i32 %30, i32* %5
  %31 = load i32, i32* %4
  %32 = icmp ne i32 %31, 0
  br i1 %32, label %33, label %39
33:
  %34 = load i32, i32* %5
  %35 = icmp ne i32 %34, 0
  br i1 %35, label %39, label %36
36:
  %37 = load i32, i32* %3
  %38 = add nsw i32 %37, 1
  store i32 %38, i32* %3
  br label %39
39:
  %40 = load i32, i32* %5
  store i32 %40, i32* %4
  br label %42
42:
  %43 = load i8*, i8** %2
  %44 = getelementptr inbounds i8, i8* %43, i32 1
  store i8* %44, i8** %2
  br label %8
45:
  %46 = load i32, i32* %3
  ret i32 %46
}
