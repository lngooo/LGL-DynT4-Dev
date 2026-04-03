define dso_local void @TrimSpace(i8* %0) {
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
  %10 = load i8*, i8** %2
  %11 = load i32, i32* %3
  %12 = sext i32 %11 to i64
  %13 = getelementptr inbounds i8, i8* %10, i64 %12
  %14 = load i8, i8* %13
  %15 = icmp ne i8 %14, 0
  br i1 %15, label %16, label %50
16:
  %17 = load i8*, i8** %2
  %18 = load i32, i32* %3
  %19 = sext i32 %18 to i64
  %20 = getelementptr inbounds i8, i8* %17, i64 %19
  %21 = load i8, i8* %20
  %22 = zext i8 %21 to i32
  %23 = call i32 @isspace(i32 %22)
  %24 = icmp ne i32 %23, 0
  br i1 %24, label %47, label %25
25:
  %26 = load i8*, i8** %2
  %27 = load i32, i32* %3
  %28 = sext i32 %27 to i64
  %29 = getelementptr inbounds i8, i8* %26, i64 %28
  %30 = load i8, i8* %29
  %31 = load i8*, i8** %2
  %32 = load i32, i32* %4
  %33 = load i32, i32* %5
  %34 = add nsw i32 %32, %33
  %35 = sext i32 %34 to i64
  %36 = getelementptr inbounds i8, i8* %31, i64 %35
  store i8 %30, i8* %36
  %37 = load i32, i32* %5
  %38 = icmp slt i32 %37, 10
  br i1 %38, label %39, label %42
39:
  %40 = load i32, i32* %5
  %41 = add nsw i32 %40, 1
  store i32 %41, i32* %5
  br label %46
42:
  %43 = load i32, i32* %5
  %44 = load i32, i32* %4
  %45 = add nsw i32 %44, %43
  store i32 %45, i32* %4
  store i32 1, i32* %5
  br label %46
46:
  br label %47
47:
  %48 = load i32, i32* %3
  %49 = add nsw i32 %48, 1
  store i32 %49, i32* %3
  br label %9
50:
  %51 = load i8*, i8** %2
  %52 = load i32, i32* %4
  %53 = load i32, i32* %5
  %54 = add nsw i32 %52, %53
  %55 = sext i32 %54 to i64
  %56 = getelementptr inbounds i8, i8* %51, i64 %55
  store i8 0, i8* %56
  ret void
}
declare i32 @isspace(i32)
