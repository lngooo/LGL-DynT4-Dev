@.str = constant [4 x i8] c"%d\0A\00"
define dso_local i32 @RTm6(i8* %0, i8* %1) {
  %3 = alloca i32
  %4 = alloca i8*
  %5 = alloca i8*
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  %9 = alloca i32
  %10 = alloca i32
  %11 = alloca i32
  %12 = alloca i32
  store i8* %0, i8** %4
  store i8* %1, i8** %5
  %14 = load i8*, i8** %4
  %15 = call i64 @strlen(i8* %14)
  %16 = trunc i64 %15 to i32
  store i32 %16, i32* %6
  %18 = load i8*, i8** %5
  %19 = call i64 @strlen(i8* %18)
  %20 = trunc i64 %19 to i32
  store i32 %20, i32* %7
  %21 = load i32, i32* %7
  %22 = icmp eq i32 %21, 0
  br i1 %22, label %23, label %24
23:
  store i32 0, i32* %3
  store i32 1, i32* %8
  br label %93
24:
  store i32 0, i32* %9
  store i32 0, i32* %10
  br label %27
27:
  %28 = load i32, i32* %9
  %29 = load i32, i32* %10
  %30 = add nsw i32 %28, %29
  %31 = load i32, i32* %6
  %32 = load i32, i32* %7
  %33 = sub nsw i32 %31, %32
  %34 = icmp sle i32 %30, %33
  br i1 %34, label %35, label %89
35:
  store i32 1, i32* %11
  store i32 0, i32* %12
  br label %38
38:
  %39 = load i32, i32* %12
  %40 = load i32, i32* %7
  %41 = icmp slt i32 %39, %40
  br i1 %41, label %43, label %42
42:
  store i32 4, i32* %8
  br label %66
43:
  %44 = load i8*, i8** %4
  %45 = load i32, i32* %9
  %46 = load i32, i32* %10
  %47 = add nsw i32 %45, %46
  %48 = load i32, i32* %12
  %49 = add nsw i32 %47, %48
  %50 = sext i32 %49 to i64
  %51 = getelementptr inbounds i8, i8* %44, i64 %50
  %52 = load i8, i8* %51
  %53 = sext i8 %52 to i32
  %54 = load i8*, i8** %5
  %55 = load i32, i32* %12
  %56 = sext i32 %55 to i64
  %57 = getelementptr inbounds i8, i8* %54, i64 %56
  %58 = load i8, i8* %57
  %59 = sext i8 %58 to i32
  %60 = icmp ne i32 %53, %59
  br i1 %60, label %61, label %62
61:
  store i32 0, i32* %11
  store i32 4, i32* %8
  br label %66
62:
  br label %63
63:
  %64 = load i32, i32* %12
  %65 = add nsw i32 %64, 1
  store i32 %65, i32* %12
  br label %38
66:
  br label %68
68:
  %69 = load i32, i32* %11
  %70 = icmp ne i32 %69, 0
  br i1 %70, label %71, label %75
71:
  %72 = load i32, i32* %9
  %73 = load i32, i32* %10
  %74 = add nsw i32 %72, %73
  store i32 %74, i32* %3
  store i32 1, i32* %8
  br label %85
75:
  %76 = load i32, i32* %9
  %77 = icmp slt i32 %76, 1000
  br i1 %77, label %78, label %81
78:
  %79 = load i32, i32* %9
  %80 = add nsw i32 %79, 1
  store i32 %80, i32* %9
  br label %84
81:
  %82 = load i32, i32* %10
  %83 = add nsw i32 %82, 1
  store i32 %83, i32* %10
  br label %84
84:
  store i32 0, i32* %8
  br label %85
85:
  %87 = load i32, i32* %8
  switch i32 %87, label %90 [
    i32 0, label %88
  ]
88:
  br label %27
89:
  store i32 -1, i32* %3
  store i32 1, i32* %8
  br label %90
90:
  br label %93
93:
  %96 = load i32, i32* %3
  ret i32 %96
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
  %16 = call i32 @RTm6(i8* %12, i8* %15)
  %17 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str, i64 0, i64 0), i32 %16)
  store i32 0, i32* %3
  br label %18
18:
  %19 = load i32, i32* %3
  ret i32 %19
}
declare i32 @printf(i8*, ...)
