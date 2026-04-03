define dso_local i32 @J(i8* %0) {
  %2 = alloca i32
  %3 = alloca i8*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  store i8* %0, i8** %3
  store i32 0, i32* %4
  store i32 0, i32* %5
  br label %10
10:
  %11 = load i8*, i8** %3
  %12 = load i32, i32* %5
  %13 = sext i32 %12 to i64
  %14 = getelementptr inbounds i8, i8* %11, i64 %13
  %15 = load i8, i8* %14
  %16 = icmp ne i8 %15, 0
  br i1 %16, label %17, label %20
17:
  %18 = load i32, i32* %5
  %19 = add nsw i32 %18, 1
  store i32 %19, i32* %5
  br label %10
20:
  %22 = load i32, i32* %5
  %23 = sub nsw i32 %22, 1
  store i32 %23, i32* %6
  br label %24
24:
  br label %25
25:
  %26 = load i32, i32* %4
  %27 = load i32, i32* %6
  %28 = icmp sge i32 %26, %27
  br i1 %28, label %29, label %30
29:
  br label %50
30:
  %31 = load i8*, i8** %3
  %32 = load i32, i32* %4
  %33 = sext i32 %32 to i64
  %34 = getelementptr inbounds i8, i8* %31, i64 %33
  %35 = load i8, i8* %34
  %36 = sext i8 %35 to i32
  %37 = load i8*, i8** %3
  %38 = load i32, i32* %6
  %39 = sext i32 %38 to i64
  %40 = getelementptr inbounds i8, i8* %37, i64 %39
  %41 = load i8, i8* %40
  %42 = sext i8 %41 to i32
  %43 = icmp ne i32 %36, %42
  br i1 %43, label %44, label %45
44:
  store i32 0, i32* %2
  store i32 1, i32* %7
  br label %51
45:
  %46 = load i32, i32* %4
  %47 = add nsw i32 %46, 1
  store i32 %47, i32* %4
  %48 = load i32, i32* %6
  %49 = add nsw i32 %48, -1
  store i32 %49, i32* %6
  br label %24
50:
  store i32 1, i32* %2
  store i32 1, i32* %7
  br label %51
51:
  %55 = load i32, i32* %2
  ret i32 %55
}
