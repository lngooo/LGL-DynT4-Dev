@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @x(i8* %0) {
  %2 = alloca i32
  %3 = alloca i8*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i8
  %11 = alloca i8
  store i8* %0, i8** %3
  store i32 0, i32* %4
  br label %13
13:
  %14 = load i8*, i8** %3
  %15 = load i32, i32* %4
  %16 = sext i32 %15 to i64
  %17 = getelementptr inbounds i8, i8* %14, i64 %16
  %18 = load i8, i8* %17
  %19 = icmp ne i8 %18, 0
  br i1 %19, label %20, label %23
20:
  %21 = load i32, i32* %4
  %22 = add nsw i32 %21, 1
  store i32 %22, i32* %4
  br label %13
23:
  %25 = load i32, i32* %4
  %26 = ashr i32 %25, 1
  store i32 %26, i32* %5
  store i32 0, i32* %6
  br label %28
28:
  %29 = load i32, i32* %6
  %30 = load i32, i32* %5
  %31 = icmp slt i32 %29, %30
  br i1 %31, label %33, label %32
32:
  store i32 4, i32* %7
  br label %66
33:
  %35 = load i32, i32* %6
  store i32 %35, i32* %8
  %37 = load i32, i32* %4
  %38 = sub nsw i32 %37, 1
  %39 = load i32, i32* %8
  %40 = sub nsw i32 %38, %39
  store i32 %40, i32* %9
  %41 = load i8*, i8** %3
  %42 = load i32, i32* %8
  %43 = sext i32 %42 to i64
  %44 = getelementptr inbounds i8, i8* %41, i64 %43
  %45 = load i8, i8* %44
  store i8 %45, i8* %10
  %46 = load i8*, i8** %3
  %47 = load i32, i32* %9
  %48 = sext i32 %47 to i64
  %49 = getelementptr inbounds i8, i8* %46, i64 %48
  %50 = load i8, i8* %49
  store i8 %50, i8* %11
  %51 = load i8, i8* %10
  %52 = sext i8 %51 to i32
  %53 = load i8, i8* %11
  %54 = sext i8 %53 to i32
  %55 = icmp ne i32 %52, %54
  br i1 %55, label %56, label %57
56:
  store i32 0, i32* %2
  store i32 1, i32* %7
  br label %58
57:
  store i32 0, i32* %7
  br label %58
58:
  %61 = load i32, i32* %7
  switch i32 %61, label %66 [
    i32 0, label %62
  ]
62:
  br label %63
63:
  %64 = load i32, i32* %6
  %65 = add nsw i32 %64, 1
  store i32 %65, i32* %6
  br label %28
66:
  %68 = load i32, i32* %7
  switch i32 %68, label %70 [
    i32 4, label %69
  ]
69:
  store i32 1, i32* %2
  store i32 1, i32* %7
  br label %70
70:
  %73 = load i32, i32* %2
  ret i32 %73
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
  %18 = call i32 @x(i8* %17)
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
