@.str = constant [5 x i8] c"%d%c\00"
define dso_local void @nc(i32* %0, i32 %1) {
  %3 = alloca i32*
  %4 = alloca i32
  %5 = alloca i32
  %6 = alloca i32
  %7 = alloca i32
  %8 = alloca i32
  store i32* %0, i32** %3
  store i32 %1, i32* %4
  store i32 1, i32* %5
  br label %10
10:
  %11 = load i32, i32* %5
  %12 = load i32, i32* %4
  %13 = sdiv i32 %12, 3
  %14 = icmp slt i32 %11, %13
  br i1 %14, label %15, label %19
15:
  %16 = load i32, i32* %5
  %17 = mul nsw i32 3, %16
  %18 = add nsw i32 %17, 1
  store i32 %18, i32* %5
  br label %10
19:
  br label %20
20:
  %21 = load i32, i32* %5
  %22 = icmp sge i32 %21, 1
  br i1 %22, label %23, label %86
23:
  %25 = load i32, i32* %5
  store i32 %25, i32* %6
  br label %26
26:
  %27 = load i32, i32* %6
  %28 = load i32, i32* %4
  %29 = icmp slt i32 %27, %28
  br i1 %29, label %32, label %30
30:
  br label %83
32:
  %34 = load i32*, i32** %3
  %35 = load i32, i32* %6
  %36 = sext i32 %35 to i64
  %37 = getelementptr inbounds i32, i32* %34, i64 %36
  %38 = load i32, i32* %37
  store i32 %38, i32* %7
  %40 = load i32, i32* %6
  store i32 %40, i32* %8
  br label %41
41:
  %42 = load i32, i32* %8
  %43 = load i32, i32* %5
  %44 = icmp sge i32 %42, %43
  br i1 %44, label %45, label %55
45:
  %46 = load i32*, i32** %3
  %47 = load i32, i32* %8
  %48 = load i32, i32* %5
  %49 = sub nsw i32 %47, %48
  %50 = sext i32 %49 to i64
  %51 = getelementptr inbounds i32, i32* %46, i64 %50
  %52 = load i32, i32* %51
  %53 = load i32, i32* %7
  %54 = icmp sgt i32 %52, %53
  br label %55
55:
  %56 = phi i1 [ false, %41 ], [ %54, %45 ]
  br i1 %56, label %57, label %72
57:
  %58 = load i32*, i32** %3
  %59 = load i32, i32* %8
  %60 = load i32, i32* %5
  %61 = sub nsw i32 %59, %60
  %62 = sext i32 %61 to i64
  %63 = getelementptr inbounds i32, i32* %58, i64 %62
  %64 = load i32, i32* %63
  %65 = load i32*, i32** %3
  %66 = load i32, i32* %8
  %67 = sext i32 %66 to i64
  %68 = getelementptr inbounds i32, i32* %65, i64 %67
  store i32 %64, i32* %68
  %69 = load i32, i32* %5
  %70 = load i32, i32* %8
  %71 = sub nsw i32 %70, %69
  store i32 %71, i32* %8
  br label %41
72:
  %73 = load i32, i32* %7
  %74 = load i32*, i32** %3
  %75 = load i32, i32* %8
  %76 = sext i32 %75 to i64
  %77 = getelementptr inbounds i32, i32* %74, i64 %76
  store i32 %73, i32* %77
  br label %80
80:
  %81 = load i32, i32* %6
  %82 = add nsw i32 %81, 1
  store i32 %82, i32* %6
  br label %26
83:
  %84 = load i32, i32* %5
  %85 = sdiv i32 %84, 3
  store i32 %85, i32* %5
  br label %20
86:
  ret void
}
define dso_local i32 @main(i32 %0, i8** %1) {
  %3 = alloca i32
  %4 = alloca i32
  %5 = alloca i8**
  %6 = alloca i32
  %7 = alloca i32*
  %8 = alloca i32
  %9 = alloca i32
  store i32 0, i32* %3
  store i32 %0, i32* %4
  store i8** %1, i8*** %5
  %10 = load i32, i32* %4
  %11 = icmp slt i32 %10, 2
  br i1 %11, label %12, label %13
12:
  store i32 0, i32* %3
  br label %76
13:
  %15 = load i32, i32* %4
  %16 = sub nsw i32 %15, 1
  store i32 %16, i32* %6
  %18 = load i32, i32* %6
  %19 = sext i32 %18 to i64
  %20 = mul i64 %19, 4
  %21 = call noalias i8* @malloc(i64 %20)
  store i32* %22, i32** %7
  store i32 0, i32* %8
  br label %24
24:
  %25 = load i32, i32* %8
  %26 = load i32, i32* %6
  %27 = icmp slt i32 %25, %26
  br i1 %27, label %30, label %28
28:
  br label %45
30:
  %31 = load i8**, i8*** %5
  %32 = load i32, i32* %8
  %33 = add nsw i32 %32, 1
  %34 = sext i32 %33 to i64
  %35 = getelementptr inbounds i8*, i8** %31, i64 %34
  %36 = load i8*, i8** %35
  %37 = call i32 @atoi(i8* %36)
  %38 = load i32*, i32** %7
  %39 = load i32, i32* %8
  %40 = sext i32 %39 to i64
  %41 = getelementptr inbounds i32, i32* %38, i64 %40
  store i32 %37, i32* %41
  br label %42
42:
  %43 = load i32, i32* %8
  %44 = add nsw i32 %43, 1
  store i32 %44, i32* %8
  br label %24
45:
  %46 = load i32*, i32** %7
  %47 = load i32, i32* %6
  call void @nc(i32* %46, i32 %47)
  store i32 0, i32* %9
  br label %49
49:
  %50 = load i32, i32* %9
  %51 = load i32, i32* %6
  %52 = icmp slt i32 %50, %51
  br i1 %52, label %55, label %53
53:
  br label %71
55:
  %56 = load i32*, i32** %7
  %57 = load i32, i32* %9
  %58 = sext i32 %57 to i64
  %59 = getelementptr inbounds i32, i32* %56, i64 %58
  %60 = load i32, i32* %59
  %61 = load i32, i32* %9
  %62 = load i32, i32* %6
  %63 = sub nsw i32 %62, 1
  %64 = icmp eq i32 %61, %63
  %65 = zext i1 %64 to i64
  %66 = select i1 %64, i32 10, i32 32
  %67 = call i32 (i8*, ...) @printf(i8* getelementptr inbounds ([5 x i8], [5 x i8]* @.str, i64 0, i64 0), i32 %60, i32 %66)
  br label %68
68:
  %69 = load i32, i32* %9
  %70 = add nsw i32 %69, 1
  store i32 %70, i32* %9
  br label %49
71:
  %72 = load i32*, i32** %7
  call void @free(i8* %73)
  store i32 0, i32* %3
  br label %76
76:
  %77 = load i32, i32* %3
  ret i32 %77
}
declare noalias i8* @malloc(i64)
define available_externally i32 @atoi(i8* nonnull %0) {
  %2 = alloca i8*
  store i8* %0, i8** %2
  %3 = load i8*, i8** %2
  %4 = call i64 @strtol(i8* %3, i8** null, i32 10)
  %5 = trunc i64 %4 to i32
  ret i32 %5
}
declare i32 @printf(i8*, ...)
declare void @free(i8*)
declare i64 @strtol(i8*, i8**, i32)
