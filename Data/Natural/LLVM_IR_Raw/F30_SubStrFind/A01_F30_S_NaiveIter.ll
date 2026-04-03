@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @SubStrFind(i8* %0, i8* %1) {
  %3 = alloca i32
  %4 = alloca i8*
  %5 = alloca i8*
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  store i8* %0, i8** %4
  store i8* %1, i8** %5
  %12 = load i8*, i8** %4
  %13 = call i64 @strlen(i8* %12)
  %14 = trunc i64 %13 to i32
  store i32 %14, i32* %6
  %16 = load i8*, i8** %5
  %17 = call i64 @strlen(i8* %16)
  %18 = trunc i64 %17 to i32
  store i32 %18, i32* %7
  %19 = load i32, i32* %7
  %20 = icmp eq i32 %19, 0
  br i1 %20, label %21, label %22
21:
  store i32 0, i32* %3
  store i32 1, i32* %8
  br label %76
22:
  store i32 0, i32* %9
  br label %24
24:
  %25 = load i32, i32* %9
  %26 = load i32, i32* %6
  %27 = load i32, i32* %7
  %28 = sub nsw i32 %26, %27
  %29 = icmp sle i32 %25, %28
  br i1 %29, label %31, label %30
30:
  store i32 2, i32* %8
  br label %72
31:
  store i32 0, i32* %10
  br label %33
33:
  %34 = load i32, i32* %10
  %35 = load i32, i32* %7
  %36 = icmp slt i32 %34, %35
  br i1 %36, label %37, label %58
37:
  %38 = load i8*, i8** %4
  %39 = load i32, i32* %9
  %40 = load i32, i32* %10
  %41 = add nsw i32 %39, %40
  %42 = sext i32 %41 to i64
  %43 = getelementptr inbounds i8, i8* %38, i64 %42
  %44 = load i8, i8* %43
  %45 = sext i8 %44 to i32
  %46 = load i8*, i8** %5
  %47 = load i32, i32* %10
  %48 = sext i32 %47 to i64
  %49 = getelementptr inbounds i8, i8* %46, i64 %48
  %50 = load i8, i8* %49
  %51 = sext i8 %50 to i32
  %52 = icmp ne i32 %45, %51
  br i1 %52, label %53, label %54
53:
  br label %58
54:
  br label %55
55:
  %56 = load i32, i32* %10
  %57 = add nsw i32 %56, 1
  store i32 %57, i32* %10
  br label %33
58:
  %59 = load i32, i32* %10
  %60 = load i32, i32* %7
  %61 = icmp eq i32 %59, %60
  br i1 %61, label %62, label %64
62:
  %63 = load i32, i32* %9
  store i32 %63, i32* %3
  store i32 1, i32* %8
  br label %65
64:
  store i32 0, i32* %8
  br label %65
65:
  %67 = load i32, i32* %8
  switch i32 %67, label %72 [
    i32 0, label %68
  ]
68:
  br label %69
69:
  %70 = load i32, i32* %9
  %71 = add nsw i32 %70, 1
  store i32 %71, i32* %9
  br label %24
72:
  %74 = load i32, i32* %8
  switch i32 %74, label %76 [
    i32 2, label %75
  ]
75:
  store i32 -1, i32* %3
  store i32 1, i32* %8
  br label %76
76:
  %79 = load i32, i32* %3
  ret i32 %79
}
declare i64 @strlen(i8*)
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %6 = load i32, i32* %4
  %7 = icmp slt i32 %6, 3
  br i1 %7, label %8, label %9
8:
  store i32 0, i32* %3
  br label %18
9:
  %10 = load i8**, i8*** %5
  %11 = getelementptr inbounds i8*, i8** %10, i64 1
  %12 = load i8*, i8** %11
  %13 = load i8**, i8*** %5
  %14 = getelementptr inbounds i8*, i8** %13, i64 2
  %15 = load i8*, i8** %14
  %16 = call i32 @SubStrFind(i8* %12, i8* %15)
  %17 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %16)
  store i32 0, i32* %3
  br label %18
18:
  %19 = load i32, i32* %3
  ret i32 %19
}
declare i32 @printf(i8*, ...)
