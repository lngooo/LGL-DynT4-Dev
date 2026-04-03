define dso_local void @U(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  store i8* %0, i8** %2
  store i32 0, i32* %3
  store i32 0, i32* %4
  store i32 0, i32* %5
  br label %9
9:
  %10 = load i32, i32* %5
  %11 = icmp ne i32 %10, -1
  br i1 %11, label %12, label %55
12:
  %13 = load i32, i32* %5
  switch i32 %13, label %54 [
    i32 0, label %14
    i32 1, label %24
    i32 2, label %46
    i32 3, label %49
  ]
14:
  %15 = load i8*, i8** %2
  %16 = load i32, i32* %3
  %17 = sext i32 %16 to i64
  %18 = getelementptr inbounds i8, i8* %15, i64 %17
  %19 = load i8, i8* %18
  %20 = sext i8 %19 to i32
  %21 = icmp eq i32 %20, 0
  %22 = zext i1 %21 to i64
  %23 = select i1 %21, i32 3, i32 1
  store i32 %23, i32* %5
  br label %54
24:
  %25 = load i8*, i8** %2
  %26 = load i32, i32* %3
  %27 = sext i32 %26 to i64
  %28 = getelementptr inbounds i8, i8* %25, i64 %27
  %29 = load i8, i8* %28
  %30 = zext i8 %29 to i32
  %31 = call i32 @isspace(i32 %30)
  %32 = icmp ne i32 %31, 0
  br i1 %32, label %45, label %33
33:
  %34 = load i8*, i8** %2
  %35 = load i32, i32* %3
  %36 = sext i32 %35 to i64
  %37 = getelementptr inbounds i8, i8* %34, i64 %36
  %38 = load i8, i8* %37
  %39 = load i8*, i8** %2
  %40 = load i32, i32* %4
  %41 = sext i32 %40 to i64
  %42 = getelementptr inbounds i8, i8* %39, i64 %41
  store i8 %38, i8* %42
  %43 = load i32, i32* %4
  %44 = add nsw i32 %43, 1
  store i32 %44, i32* %4
  br label %45
45:
  store i32 2, i32* %5
  br label %54
46:
  %47 = load i32, i32* %3
  %48 = add nsw i32 %47, 1
  store i32 %48, i32* %3
  store i32 0, i32* %5
  br label %54
49:
  %50 = load i8*, i8** %2
  %51 = load i32, i32* %4
  %52 = sext i32 %51 to i64
  %53 = getelementptr inbounds i8, i8* %50, i64 %52
  store i8 0, i8* %53
  store i32 -1, i32* %5
  br label %54
54:
  br label %9
55:
  ret void
}
declare i32 @isspace(i32)
