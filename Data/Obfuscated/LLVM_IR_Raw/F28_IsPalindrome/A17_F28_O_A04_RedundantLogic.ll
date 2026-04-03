@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @kpzy(i8* %0) {
  %2 = alloca i32
  %3 = alloca i8*
  %4 = alloca i32
  %5 = alloca [100 x i8]
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  store i8* %0, i8** %3
  store i32 0, i32* %4
  br label %10
10:
  %11 = load i8*, i8** %3
  %12 = load i32, i32* %4
  %13 = sext i32 %12 to i64
  %14 = getelementptr inbounds i8, i8* %11, i64 %13
  %15 = load i8, i8* %14
  %16 = icmp ne i8 %15, 0
  br i1 %16, label %17, label %20
17:
  %18 = load i32, i32* %4
  %19 = add nsw i32 %18, 1
  store i32 %19, i32* %4
  br label %10
20:
  store i32 0, i32* %6
  br label %23
23:
  %24 = load i32, i32* %6
  %25 = load i32, i32* %4
  %26 = icmp slt i32 %24, %25
  br i1 %26, label %27, label %38
27:
  %28 = load i8*, i8** %3
  %29 = load i32, i32* %6
  %30 = sext i32 %29 to i64
  %31 = getelementptr inbounds i8, i8* %28, i64 %30
  %32 = load i8, i8* %31
  %33 = load i32, i32* %6
  %34 = sext i32 %33 to i64
  %35 = getelementptr inbounds [100 x i8], [100 x i8]* %5, i64 0, i64 %34
  store i8 %32, i8* %35
  %36 = load i32, i32* %6
  %37 = add nsw i32 %36, 1
  store i32 %37, i32* %6
  br label %23
38:
  %39 = load i32, i32* %6
  %40 = add nsw i32 %39, -1
  store i32 %40, i32* %6
  store i32 0, i32* %7
  br label %42
42:
  %43 = load i32, i32* %7
  %44 = load i32, i32* %4
  %45 = icmp slt i32 %43, %44
  br i1 %45, label %47, label %46
46:
  store i32 6, i32* %8
  br label %66
47:
  %48 = load i32, i32* %6
  %49 = add nsw i32 %48, -1
  store i32 %49, i32* %6
  %50 = sext i32 %48 to i64
  %51 = getelementptr inbounds [100 x i8], [100 x i8]* %5, i64 0, i64 %50
  %52 = load i8, i8* %51
  %53 = sext i8 %52 to i32
  %54 = load i8*, i8** %3
  %55 = load i32, i32* %7
  %56 = sext i32 %55 to i64
  %57 = getelementptr inbounds i8, i8* %54, i64 %56
  %58 = load i8, i8* %57
  %59 = sext i8 %58 to i32
  %60 = icmp ne i32 %53, %59
  br i1 %60, label %61, label %62
61:
  store i32 0, i32* %2
  store i32 1, i32* %8
  br label %66
62:
  br label %63
63:
  %64 = load i32, i32* %7
  %65 = add nsw i32 %64, 1
  store i32 %65, i32* %7
  br label %42
66:
  %68 = load i32, i32* %8
  switch i32 %68, label %70 [
    i32 6, label %69
  ]
69:
  store i32 1, i32* %2
  store i32 1, i32* %8
  br label %70
70:
  %74 = load i32, i32* %2
  ret i32 %74
}
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  %6 = alloca i8*
  %7 = alloca i32
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %8 = load i32, i32* %4
  %9 = icmp slt i32 %8, 2
  br i1 %9, label %10, label %11
10:
  store i32 1, i32* %3
  br label %23
11:
  %13 = load i8**, i8*** %5
  %14 = getelementptr inbounds i8*, i8** %13, i64 1
  %15 = load i8*, i8** %14
  store i8* %15, i8** %6
  %17 = load i8*, i8** %6
  %18 = call i32 @kpzy(i8* %17)
  store i32 %18, i32* %7
  %19 = load i32, i32* %7
  %20 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %19)
  store i32 0, i32* %3
  br label %23
23:
  %24 = load i32, i32* %3
  ret i32 %24
}
declare i32 @printf(i8*, ...)
