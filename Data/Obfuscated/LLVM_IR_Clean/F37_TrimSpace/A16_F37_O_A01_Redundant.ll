define dso_local void @Al(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i32
  store i8* %0, i8** %2
  store i32 0, i32* %3
  store i32 0, i32* %4
  br label %8
8:
  %9 = load i8*, i8** %2
  %10 = load i32, i32* %3
  %11 = sext i32 %10 to i64
  %12 = getelementptr inbounds i8, i8* %9, i64 %11
  %13 = load i8, i8* %12
  %14 = icmp ne i8 %13, 0
  br i1 %14, label %15, label %48
15:
  %17 = load i32, i32* %3
  %18 = load i32, i32* %4
  %19 = add nsw i32 %17, %18
  store i32 %19, i32* %5
  %20 = load i8*, i8** %2
  %21 = load i32, i32* %3
  %22 = sext i32 %21 to i64
  %23 = getelementptr inbounds i8, i8* %20, i64 %22
  %24 = load i8, i8* %23
  %25 = zext i8 %24 to i32
  %26 = call i32 @isspace(i32 %25)
  %27 = icmp ne i32 %26, 0
  br i1 %27, label %44, label %28
28:
  %29 = load i32, i32* %5
  %30 = icmp sge i32 %29, 0
  br i1 %30, label %31, label %43
31:
  %32 = load i8*, i8** %2
  %33 = load i32, i32* %3
  %34 = sext i32 %33 to i64
  %35 = getelementptr inbounds i8, i8* %32, i64 %34
  %36 = load i8, i8* %35
  %37 = load i8*, i8** %2
  %38 = load i32, i32* %4
  %39 = sext i32 %38 to i64
  %40 = getelementptr inbounds i8, i8* %37, i64 %39
  store i8 %36, i8* %40
  %41 = load i32, i32* %4
  %42 = add nsw i32 %41, 1
  store i32 %42, i32* %4
  br label %43
43:
  br label %44
44:
  %45 = load i32, i32* %3
  %46 = add nsw i32 %45, 1
  store i32 %46, i32* %3
  br label %8
48:
  %49 = load i8*, i8** %2
  %50 = load i32, i32* %4
  %51 = sext i32 %50 to i64
  %52 = getelementptr inbounds i8, i8* %49, i64 %51
  store i8 0, i8* %52
  ret void
}
declare i32 @isspace(i32)
