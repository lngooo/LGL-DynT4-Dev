define dso_local i32 @EWDt(i8* %0, i8* %1) {
  %3 = alloca i32
  %4 = alloca i8*
  %5 = alloca i8*
  %6 = alloca [256 x i8]
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i8*
  store i8* %0, i8** %4
  store i8* %1, i8** %5
  %11 = load i8*, i8** %4
  %12 = call i64 @strlen(i8* %11)
  %13 = load i8*, i8** %5
  %14 = call i64 @strlen(i8* %13)
  %15 = icmp ne i64 %12, %14
  br i1 %15, label %16, label %17
16:
  store i32 0, i32* %3
  br label %70
17:
  %19 = getelementptr inbounds [256 x i8], [256 x i8]* %6, i64 0, i64 0
  %20 = load i8*, i8** %5
  %21 = call i8* @strcpy(i8* %19, i8* %20)
  %23 = load i8*, i8** %4
  %24 = call i64 @strlen(i8* %23)
  %25 = trunc i64 %24 to i32
  store i32 %25, i32* %7
  store i32 0, i32* %8
  br label %27
27:
  %28 = load i32, i32* %8
  %29 = load i32, i32* %7
  %30 = icmp slt i32 %28, %29
  br i1 %30, label %32, label %31
31:
  store i32 2, i32* %9
  br label %63
32:
  %34 = getelementptr inbounds [256 x i8], [256 x i8]* %6, i64 0, i64 0
  %35 = load i8*, i8** %4
  %36 = load i32, i32* %8
  %37 = sext i32 %36 to i64
  %38 = getelementptr inbounds i8, i8* %35, i64 %37
  %39 = load i8, i8* %38
  %40 = sext i8 %39 to i32
  %41 = call i8* @strchr(i8* %34, i32 %40)
  store i8* %41, i8** %10
  %42 = load i8*, i8** %10
  %43 = icmp ne i8* %42, null
  br i1 %43, label %45, label %44
44:
  store i32 0, i32* %3
  store i32 1, i32* %9
  br label %56
45:
  %46 = getelementptr inbounds [256 x i8], [256 x i8]* %6, i64 0, i64 0
  %47 = call i64 @strlen(i8* %46)
  %48 = sub i64 %47, 1
  %49 = getelementptr inbounds [256 x i8], [256 x i8]* %6, i64 0, i64 %48
  %50 = load i8, i8* %49
  %51 = load i8*, i8** %10
  store i8 %50, i8* %51
  %52 = getelementptr inbounds [256 x i8], [256 x i8]* %6, i64 0, i64 0
  %53 = call i64 @strlen(i8* %52)
  %54 = sub i64 %53, 1
  %55 = getelementptr inbounds [256 x i8], [256 x i8]* %6, i64 0, i64 %54
  store i8 0, i8* %55
  store i32 0, i32* %9
  br label %56
56:
  %58 = load i32, i32* %9
  switch i32 %58, label %63 [
    i32 0, label %59
  ]
59:
  br label %60
60:
  %61 = load i32, i32* %8
  %62 = add nsw i32 %61, 1
  store i32 %62, i32* %8
  br label %27
63:
  %65 = load i32, i32* %9
  switch i32 %65, label %67 [
    i32 2, label %66
  ]
66:
  store i32 1, i32* %3
  store i32 1, i32* %9
  br label %67
67:
  br label %70
70:
  %71 = load i32, i32* %3
  ret i32 %71
}
declare i64 @strlen(i8*)
declare i8* @strcpy(i8*, i8*)
declare i8* @strchr(i8*, i32)
