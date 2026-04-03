@.str = constant [3 x i8] c"%s\00"
define dso_local void @xRt(i8* %0) {
  %2 = alloca i8*
  %3 = alloca i64
  %4 = alloca i64
  %5 = alloca i32
  store i8* %0, i8** %2
  store i64 0, i64* %3
  br label %7
7:
  %8 = load i8*, i8** %2
  %9 = load i64, i64* %3
  %10 = getelementptr inbounds i8, i8* %8, i64 %9
  %11 = load i8, i8* %10
  %12 = icmp ne i8 %11, 0
  br i1 %12, label %15, label %13
13:
  br label %86
15:
  %17 = load i64, i64* %3
  %18 = sub nsw i64 %17, 1
  store i64 %18, i64* %4
  %20 = load i64, i64* %3
  %21 = icmp eq i64 %20, 0
  br i1 %21, label %29, label %22
22:
  %23 = load i8*, i8** %2
  %24 = load i64, i64* %4
  %25 = getelementptr inbounds i8, i8* %23, i64 %24
  %26 = load i8, i8* %25
  %27 = sext i8 %26 to i32
  %28 = icmp eq i32 %27, 32
  br label %29
29:
  %30 = phi i1 [ true, %15 ], [ %28, %22 ]
  %31 = zext i1 %30 to i32
  store i32 %31, i32* %5
  %32 = load i32, i32* %5
  %33 = icmp ne i32 %32, 0
  br i1 %33, label %34, label %57
34:
  %35 = load i8*, i8** %2
  %36 = load i64, i64* %3
  %37 = getelementptr inbounds i8, i8* %35, i64 %36
  %38 = load i8, i8* %37
  %39 = sext i8 %38 to i32
  %40 = icmp sge i32 %39, 97
  br i1 %40, label %41, label %56
41:
  %42 = load i8*, i8** %2
  %43 = load i64, i64* %3
  %44 = getelementptr inbounds i8, i8* %42, i64 %43
  %45 = load i8, i8* %44
  %46 = sext i8 %45 to i32
  %47 = icmp sle i32 %46, 122
  br i1 %47, label %48, label %56
48:
  %49 = load i8*, i8** %2
  %50 = load i64, i64* %3
  %51 = getelementptr inbounds i8, i8* %49, i64 %50
  %52 = load i8, i8* %51
  %53 = sext i8 %52 to i32
  %54 = sub nsw i32 %53, 32
  %55 = trunc i32 %54 to i8
  store i8 %55, i8* %51
  br label %56
56:
  br label %80
57:
  %58 = load i8*, i8** %2
  %59 = load i64, i64* %3
  %60 = getelementptr inbounds i8, i8* %58, i64 %59
  %61 = load i8, i8* %60
  %62 = sext i8 %61 to i32
  %63 = icmp sge i32 %62, 65
  br i1 %63, label %64, label %79
64:
  %65 = load i8*, i8** %2
  %66 = load i64, i64* %3
  %67 = getelementptr inbounds i8, i8* %65, i64 %66
  %68 = load i8, i8* %67
  %69 = sext i8 %68 to i32
  %70 = icmp sle i32 %69, 90
  br i1 %70, label %71, label %79
71:
  %72 = load i8*, i8** %2
  %73 = load i64, i64* %3
  %74 = getelementptr inbounds i8, i8* %72, i64 %73
  %75 = load i8, i8* %74
  %76 = sext i8 %75 to i32
  %77 = add nsw i32 %76, 32
  %78 = trunc i32 %77 to i8
  store i8 %78, i8* %74
  br label %79
79:
  br label %80
80:
  br label %83
83:
  %84 = load i64, i64* %3
  %85 = add nsw i64 %84, 1
  store i64 %85, i64* %3
  br label %7
86:
  ret void
}
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %6 = load i32, i32* %4
  %7 = icmp slt i32 %6, 2
  br i1 %7, label %8, label %9
8:
  store i32 0, i32* %3
  br label %17
9:
  %10 = load i8**, i8*** %5
  %11 = getelementptr inbounds i8*, i8** %10, i64 1
  %12 = load i8*, i8** %11
  call void @xRt(i8* %12)
  %13 = load i8**, i8*** %5
  %14 = getelementptr inbounds i8*, i8** %13, i64 1
  %15 = load i8*, i8** %14
  %16 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str, i64 0, i64 0), i8* %15)
  store i32 0, i32* %3
  br label %17
17:
  %18 = load i32, i32* %3
  ret i32 %18
}
declare i32 @printf(i8*, ...)
